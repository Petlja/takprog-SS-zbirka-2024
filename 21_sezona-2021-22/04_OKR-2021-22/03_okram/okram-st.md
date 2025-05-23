---
title: Окрам
timelimit: 2.012
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

Претходних година, дуологија о великом шефу мафије ексклузивне дисјункције *Окрам Ћивас* постали су неки од најпопуларнијих и највољенијих филмова на тржишту. Дуологија се састоји од, као што име каже, два филма, који се зову *Окрам* и *Ћивас*. У овом задатку бавићемо се првим делом дуологије - *Окрамом*.

У првој авантури нашег хероја, он се затекао у мистериозној матрици, димензија $M\times N$. Ова матрица је по много томе мистериозна, а један од главних разлога је што се сматра да су у њој два поља суседна ако деле страницу. Још мистериозније, два поља у истој колони, од којих је један у првом реду, а други у последњем реду, као и два поља у истом реду од којих је један у првој колони, а други у последњој колони се такође сматрају суседним! **Ово значи да је свако поље суседно са тачно $4$ поља.**  На почетку, свако поље има своју вредност, која је Окраму Ћивасу позната. Сваке секунде, из непознатих разлога, свако поље промени вредност у ексклузивну дисјункцију (познату и као `xor`) вредности својих суседа у претходној секунди.

Како је Окрам Ћивас познат по својој мајсторији са ексклузивном дисјункцијом, он је себи поставио $Q$ питања следеће садржине: коју вредност има поље у пресеку реда $x$ и колоне $y$, после $2^k$ секунди (сваки човек који воли битовске операције воли и степене двојке)?

## Опис улаза
Прва линија стандардног улаза садржи три броја, број редова $N$, број колона $M$ и број упита $Q$. Наредних $N$ линија садрже по $M$ природних бројева: где $j$-ти број у $(i+1)$-вој линији представља број $A_{ij}$, који означава почетну вредност (у $0$-тој секунди) поља у $i$-том реду и $j$-тој колони. Наредних $Q$ линија садржи по $3$ броја: $x,y,k$, који представљају питања из текста.

## Опис излаза
На стандардни излаз је постребно исписати $Q$ линија: у $i$-тој линији треба одговорити на $i$-то питање.

## Пример

### Улаз

```
3 3 2
1 2 3
4 5 6
7 8 9
1 1 0
2 2 1
```

### Излаз

```
2
8
```
## Објашњења примера
После прве секунде матрица ће изгледати овако:
```
2 15 12
5 8 11
4 9 10
```
Вредност у средини после друге секунде ће бити једнака $15\text{ xor }11\text{ xor }9\text{ xor }5=8$.

## Ограничења
-   $2 \leq N,M \leq 1500$,
-   $1\leq Q\leq 200.000$,
-   $0\leq A_{ij}\leq 1.000.000$,
-  $1\leq x\leq N$,
-  $1\leq y\leq M$,
-  $0\leq k\leq 1.000.000$.

Тест примери су подељени у 5 дисјунктних група:

-   У тест примерима вредним $10$ поена: $N,M\leq5$ и $A_{ij}\leq 1$.
-   У тест примерима вредним $10$ поена: $K\leq5$.
-   У тест примерима вредним $20$ поена: $K\leq200$.
-   У тест примерима вредним $30$ поена: Све почетне вредности су $0$ осим једне која је $1$.
-   У тест примерима вредним $30$ поена: Без додатних ограничења.
## Напомена

Оператор ексклузивне дисјункције у Pascal-u је означен са  `xor`, док у C++ га записујемо помоћу симбола  `^`. Ова операција $x\ \text{xor} \ y​$ се за ненегативне целе бројеве $x,y​$ дефинише на следећи начин. Прво се бројеви запишу у бинарном запису. Уколико један број има мање цифара од другог, дописују му се водеће нуле све док не буду имали исти број бинарних цифара. Тако се добијају два низа бинарних цифара, означимо их са $a_1, \ldots, a_k​$ и $b_1, \ldots b_k​$. Затим се за сваку позицију $i \in {1, \ldots, k }​$ рачуна $c_i​$ помоћу следећих правила:

-   За $a_{i} = 0, b_{i} = 0$ важи $c_{i} = 0$.
-   За $a_{i} = 0, b_{i} = 1$ важи $c_{i} = 1$.
-   За $a_{i} = 1, b_{i} = 0$ важи $c_{i} = 1$.
-   За $a_{i} = 1, b_{i} = 1$ важи $c_{i} = 0$.

Низ бинарних цифара $c_1, \ldots, c_k$ (који можда има водеће нуле) је бинарни запис резултата, односно броја $x \ \text{xor} \ y$.

Ако желите да сазнате шта се деси у наставку, погледајте други задатак за $A$ категорију: *Ћивас*


