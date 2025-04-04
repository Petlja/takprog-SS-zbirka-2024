---
title: AdVenture Communist
timelimit: 0.098
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

AdVenture Communist 2 је игрица у којој играч купује фабрике са циљем да прикупи што више кромпира за најкраће време. Укупно постоји $N$ различитих типова фабрика.

<br>

Број кромпира $a_0$ се сваке секунде повећа прво $C$ пута, а затим се дода број кромпира који произведе фабрика првог типа. Фабрика првог типа сваке секунде производи $K_1$ krompira, дакле уколико у тренутку $t$ имате $a_0$ кромпира и $a_1$ фабрика првог типа у тренутку $t+1$ ћете имати $C \cdot a_0 + K_1 \cdot a_1$ кромпира. Број фабрика типа типа $i$ се такође сваке секунде прво повећа $C$ пута, а затим се дода број фабрика типа $i$ које је произвела фабрика типа $i+1$. Фабрике типа $i+1$ где је $i>0$ сваке секунде производе $(i+1) \cdot K_{i+1}$ фабрика типа $i$, дакле уколико у тренутку $t$ имате $a_i$ фабрика типа $i$ и  $a_{i+1}$ фабрика типа $i+1$ у тренутку $t+1$ ћете имати $C \cdot a_i + (i+1) \cdot K_{i+1} \cdot a_{i+1}$ фабрика типа $i$.

<br>

Зависност описаног низа $a_0, a_1, ... , a_N$ од времена се може формално записати помоћу формуле:

<br>

$$a_i(t+1) = C \cdot a_i(t) + (i+1) \cdot K_{i+1} \cdot a_{i+1}(t)$$

<br>

Ваш задатак је да одредите укупан број кромпира у тренутку $T$, то јест $a_0(T)$, по модулу $10^9+7$.

<br>

## Опис улаза

<br>

Прва линија стандардног улаза садржи три броја, број елемената низа $N$, тренутак $T$ и константа $C$. У другом реду налази се $N$ целих бројева који представљају вредности елемената низа у тренутку $t=0$. У трећем реду налази се $N$ целих бројева који представљају низ $K_0, K_1, ... , K_N$.

<br>

## Опис излаза

<br>

На стандардни излаз је постребно исписати један цео број $a_0(T)$ по модулу $10^9+7$.

<br>

## Пример

<br>

### Улаз

```
3 3 2
1 1 1
1 1 1
```

### Излаз

```
32
```

<br>

## Објашњења примера
После прве секунде низ ће изгледати овако:
```
a = {3, 4, 2}
```
После друге секунде низ ће изгледати овако:
```
a = {10, 12, 4}
```
После треће секунде низ ће изгледати овако:
```
a = {32, 32, 8}
```
Како тражимо вредност у $a_0$ после треће секунде, одговор је 32.

<br>

## Ограничења
-   $1 \leq N\leq 200000$,
-   $1\leq T\leq 10^9$,
-   $1\leq C \leq 10^9$,
-   $0\leq a_{i}\leq 10^9$,
-   $0\leq K_{i}\leq 10^9$.

<br>

Тест примери су подељени у 4 дисјунктне групе:

-   У тест примерима вредним $10$ поена: $N,T\leq 2000$.
-   У тест примерима вредним $20$ поена: $N\leq200$.
-   У тест примерима вредним $20$ поена: $C=1$.
-   У тест примерима вредним $20$ поена: $N\leq1000$.
-   У тест примерима вредним $30$ поена: Нема додатних ограничења.


