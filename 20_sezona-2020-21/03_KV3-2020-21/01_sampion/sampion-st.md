---
title: Шампион
timelimit: 0.05
memlimit: 64
owner: takprog
origin: null
tags: []
status: KOMPLETAN
status-date: 2024-08-15
crafted-dir: testcases
solutions:
- name: ex0
  lang: [cpp, py]
  desc: ''
  tags: []
---

Седмоструки светски шампион, Џонас Њубауер спрема се за следеће светско првенство у Класичном Тетрису. Пошто зна да његова конкуренција вредно вежба, укључујући и његовог младог ривала Џозефа који се скоро појавио на Тетрис сцени, слободном проценом је закључио да му је потребно још укупно $T$ минута играња како би обезбедио своју осму титулу. Смислио је следећи план тренирања.

Наизменично ће играти Тетрис $X$ минута, па $Y$ минута одмарати очи и пити кафу. Када заврши са одмором, поново ће се вратити на играње Тетриса и тако у круг док укупно не одигра тачно планираних $T$ минута (престаје да тренира у тренутку када заврши $T$-ти минут играња).

Колико му је укупно потребно минута од почетка тренинга (рачунајући и време за одмор између играња) како би одиграо $T$ минута Тетриса?

Бум! Тетрис за Џонаса! <3

## Опис улаза

У јединој линији улаза налазе се три цела позитивна броја $X$, $Y$ i $T$. 

## Опис излаза

У јединој линији излаза исписати колико минута је потребно од почетка тренинга како би Џонас одиграо $T$ минута Тетриса.

## Ограничења

- $1 \leq X, T \leq 10^{15}$ (Џонас је врло посвећен Тетрису, **погледајте напомену**)
- $1 \leq Y \leq 1000$

Тест примери су подељени у 3 дисјунктнe групe:

-   У тест примерима вредним $20$ поена: $T \leq 2\cdot X$, $1 \leq X, T \leq 10^9$
-   У тест примерима вредним $30$ поена: $1 \leq X, T \leq 1000$
-   У тест примерима вредним $50$ поена: Без додатних ограничења

## Напомена

* Због величине бројева, користите 64-битне типове целих бројева (нпр. у C++ тип `long long`).

## Пример 1

### Улаз

~~~
5 4 8
~~~

### Излаз

~~~
12
~~~

### Објашњење

Џонас ће одиграти $5$ минута Тетриса, након чега ће одморити $4$ минута. После тога, одиграће још $3$ минута Тетриса и тиме завршити $8$ минута играња.

## Пример 2

### Улаз

~~~
3456 1 1800
~~~

### Излаз

~~~
1800
~~~

### Објашњење
Џонас ће одиграти свих $1800$ минута пре него што му буде била потребна пауза. 

## Пример 3

### Улаз

~~~
305 534 13413413003
~~~

### Излаз

~~~
36897880205
~~~



