---
title: НЗД пермутације
timelimit: 0.215
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

Дат је низ $A$ од $N$ природних бројева. Израчунати остатак који при дељењу са $10^9 + 7$ даје збир највећих заједничких делилаца суседних чланова свих $N!$ пермутација низа $A$.

Другим речима, ако је $S_N$ скуп свих пермутација дужине $N$, израчунати $\sum_{P \in S_N} \sum_{i=1}^{N-1} NZD(A_{P_i}, A_{P_{i+1}})$ по модулу $10^9+7$.

## Опис улаза

У првом реду стандардног улаза налази се број $N$. У наредном реду налази се $N$ природних бројева, низ $A$.

## Опис излаза

Исписати решење на стандардни излаз.

## Ограничења

- $1 \leq N \leq 10^5$,
- $1 \leq A_i \leq 10^6$.

## Подзадаци

1. (11 поена) $N \leq 9$. 
2. (17 поена) $N \leq 1000$.
3. (21 поена) $A_i \leq 1000$.
4. (6 поена) У низу $A$ има највише две различите вредности.
5. (45 поена) Нема додатних ограничења.

## Пример 1

### Улаз

```
3
12 15 15
```

### Излаз

```
84
```

### Објашњење

Тражимо збир за $6$ пермутација:
- $[12, 15, 15]$, $3 + 15 = 18$
- $[12, 15, 15]$, $3 + 15 = 18$
- $[15, 12, 15]$, $3 + 3 = 6$
- $[15, 15, 12]$, $15 + 3 = 18$
- $[15, 12, 15]$, $3 + 3 = 6$
- $[15, 15, 12]$, $15 + 3 = 18$

Решење је $18 + 18 + 6 + 18 + 6 + 18 = 84$.

## Пример 2

### Улаз

```
7
20 25 9 10 21 29 12
```

### Излаз

```
69120
```


