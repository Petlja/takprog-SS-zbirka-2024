---
title: Одбијање
timelimit: 0.078
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

Комисија је за ово такмичење поново спремила чудан уређај и наизглед
бескорисна питања о њему: идеалну гумену лоптицу и стазу по којој се
она котрља. Стазу ћемо посматрати као праву линију, где лоптица почиње
на позицији $0$, крећући се брзином 1 у десно, ка позитивним
позицијама (дакле, након једне секунде ће бити на позицији 1, након
две на позицији 2, ...).

Да би стаза била занимљивија, на њој се налази $N$ зидова на
позицијама $X_i$ и стабилностима $S_i$. Када лоптица удари у зид,
одбија се и почиње да се креће у супротном смеру. Како је лоптица
идеална, наставиће да се креће истом брзином $1$. Након судара,
стабилност зида се смањује за $1$, и ако се смањила на $0$, тај зид
нестаје.

Комисију интересује програм који ће, за дате позиције и стабилности
зидова, одредити **колико ће времена проћи од почетка кретања лоптице
до последњег судара са зидом**.

## Опис улаза

У првом реду дат је један природни број, број зидова $N$. У наредних
$N$ редова су дата по два цела броја $X_i, S_i$, редом позиција и
стабилност $i$-тог зида.

## Опис излаза

У једином реду излаза је потребно исписати број секунди од почетка
кретања лоптице до последњег судара са зидом. Како овај број може бити
веома велик, испишите његов остатак при дељењу са $10^9 + 7$.

## Пример 1

### Улаз
```
3
2 7
-1 1
-3 1
```

### Излаз
```
18
```

### Објашњење примера

Куглица почиње на позицији $0$, и за две секунде удара у зид на
позицији $2$, чија стабилност се смањује на $7-1 = 6$. Одбија се и
креће удесно, и након три секунде се судара са зидом на позицији
$-1$, који након судара нестаје. Даље се куглица креће три секунде
десно, па пет секунди лево, и када се одбије од зида на $-3$ тај зид
нестаје. Коначно, креће се још пет секунди до зида на позицији $2$,
што је последње одбијање јер након њега више нема зидова на путањи
лоптице.

Укупан број секунди од почетка је $2 + 3 + 3 + 5 + 5 = 18$.

## Пример 2

### Улаз

```
2
10000000 1234567
-10000000 12345678
```

### Излаз

```
669654326
```


## Ограничења:

* $|X_i| \leq 10^9$, и све позиције $X_i$ су различите,
* $1 \leq N \leq 5 \cdot 10^4$,
* $1 \leq S_i \leq 10^9$,
* Не постоји зид на почетној позицији лоптице ($X_i \neq 0$),
* Гарантује се да ће се лоптица сударити са барем једним зидом.

Примери су подељени у четири дисјунктне групе: 

* У тест примерима вредним 30 поена: $N \leq 100, S_i \leq 100, |X_i|
  \leq 100$.
* У тест примерима вредним 20 поена: $N \leq 1000, S_i \leq 1000$.
* У тест примерима вредним 20 поена: $N \leq 5000$.
* У тест примерима вредним 30 поена нема додатних ограничења.



