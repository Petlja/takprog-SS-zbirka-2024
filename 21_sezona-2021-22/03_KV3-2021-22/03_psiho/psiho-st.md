---
title: Психо
timelimit: 0.118
memlimit: 64
owner: takprog
origin: null
tags: []
status: KOMPLETAN
status-date: 2024-08-15
crafted-dir: testcases
solutions:
- name: ex0
  lang: [cpp]
  desc: ''
  tags: []
---

Зовете се Патрик Бајтмен. Имате двадесет седам година. Бринете о себи балансираном дијетом, строгим режимом тренинга. Ујутру, ако вам је лице надувено, ставићете ледену маску док радите задатке из програмирања. Можете да их урадите хиљаду тренутно...

Радите у једној програмерској фирми, и желите да стигнете до врха, самог врха. Хијерархија фирме је у облику стабла, односно свака особа, сем директора, има тачно једног надређеног. У фирми ради $N$ особа и оне су нумерисане од $1$ до $N$. За сваку особу знате њиховог надређеног, сем особе $1$, која представља директора. 

Опседнути сте визиткартама и зато пратите куда оне пролазе кроз компанију. Одавно сте приметили да оне увек иду уз хијерархију, односно *нагоре* (особа је увек даје свом надређеном). Тачно $M$ визиткарти ће бити пуштено у циркулацију и за сваку знате у ком минуту ће се то десити, као и која особа ће то урадити. 

Све особе које тренутно поседују нечију визиткарту проследиће је наредног минута свом надређеном. Прецизније, уколико се нека визиткарта у минуту $t$ налази код особе $a$, у минуту $t+1$ налазиће се код особе која је надређена особи $a$. Ако се та визит карта налази код шефа, он ће је склонити у своју колекцију, на безбедно. Уколико некој особи (укључујући директорa) у истом тренутку стигне више од једне визиткарте, та особа ће узети неке две визиткарте, упоредити их и обе бацити у ђубре. То ће понављати докле год му не остане највише једна визиткарта. На пример, ако у тренутку $t$ некој особи стигне $5$ визиткарти, та особа ће прво узети две, упоредити их, па бацити, и онда поново то урадити са следеће две карте. Преосталу визиткарту проследиће надређеном у тренутку $t+1$. У случају да јој је стигло $4$ визиткарте, након поређења јој не би остала ниједна, па не би имала шта да проследи.

Вас, Патрика Бајтмана, занима колико визиткарти је бачено у ђубре. Зашто? Зато што сте ви србијански психо.

## Опис улаза
У првом реду стандардног улаза налазе се два цела броја $N$ и $M$ - број особа у фирми и број визиткарти које ће бити у циркулацији.

У другом реду стандардног улаза налази се низ целих бројева $p_2,  p_3, \ldots, p_N$ дужине $N-1$, где $p_i$ представља ознаку особе која је надређена особи $i$. 

Наредних $M$ линија садрже по два цела броја $t_i$ и $v_i$ - минут у којем се појавила $i$-та визит карта и ознака особе код које се појавила. И ова визиткарта се рачуна у карте које су *стигле* код особе $v_i$ у тренутку $t_i$.

## Опис излаза
У јединој линији стандардног излаза исписати цео броj који представља број визиткарти које су бачене у ђубре. 

## Пример 1

### Улаз
```
6 6
1 2 2 2 4 
3 6
7 3
7 5
8 5
7 1
4 4
```

### Излаз
```
4
```

### Објашњење
Прва и шеста визиткарта ће се наћи у исто време код особе $4$ и оне ће се одбацити. Слично, друга и трећа визит карта ће се наћи код особе $2$ и онда ће их одбацити. Четврта и пета визиткарта ће неометано доћи до директора.

## Пример 2

### Улаз
```
5 10
1 1 1 1 
4 4
3 3
3 4
2 2
2 3
2 4
1 2
1 3
1 4
1 5
```

### Излаз
```
8
```

### Објашњење
Прва визиткарта неометано стиже до директора. Друга и трећа визиткарта стижу код директора у тренутку $4$ и он их одбацује. Четврта, пета и шеста карта стижу код директора у тренутку $3$ и он узима две насумичне и одбацује их, а трећу чува за колекцију. Седма, осма, девета и десета се све одбацују, стижу у тренутку $2$.

## Ограничења

- $1 \leq N, M \leq 10^5$,
- $1 \leq p_i \leq N$, $p_i < i$, за $2 \leq i \leq N$,
- $1 \leq t_i \leq 10^9$, за $1 \leq i \leq M$,
- $1 \leq v_i \leq N$, за $1 \leq i \leq M$.

Тест примери су подељени у пет дисјунктних група:

- У тестовима вредним 15 поена: $N, M \leq 1000$.
- У тестовима вредним 20 поена: $p_i = i-1$, за $2 \leq i \leq N$.
- У тестовима вредним 20 поена: $t_i = 1$, за $1 \leq i \leq M$ .
- У тестовима вредним 40 поена: Без додатних ограничења.


