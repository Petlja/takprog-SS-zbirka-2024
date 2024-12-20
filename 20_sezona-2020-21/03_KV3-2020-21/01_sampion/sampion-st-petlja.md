﻿Седмоструки светски шампион, Џонас Њубауер спрема се за следеће светско првенство у Класичном Тетрису. Пошто зна да његова конкуренција вредно вежба, укључујући и његовог младог ривала Џозефа који се скоро појавио на Тетрис сцени, слободном проценом је закључио да му је потребно још укупно $T$ минута играња како би обезбедио своју осму титулу. Смислио је следећи план тренирања.

<br>

Наизменично ће играти Тетрис $X$ минута, па $Y$ минута одмарати очи и пити кафу. Када заврши са одмором, поново ће се вратити на играње Тетриса и тако у круг док укупно не одигра тачно планираних $T$ минута (престаје да тренира у тренутку када заврши $T$-ти минут играња).

<br>

Колико му је укупно потребно минута од почетка тренинга (рачунајући и време за одмор између играња) како би одиграо $T$ минута Тетриса?

<br>

Бум! Тетрис за Џонаса! <3

<br>

## Опис улаза

<br>

У јединој линији улаза налазе се три цела позитивна броја $X$, $Y$ i $T$. 

<br>

## Опис излаза

<br>

У јединој линији излаза исписати колико минута је потребно од почетка тренинга како би Џонас одиграо $T$ минута Тетриса.

<br>

## Ограничења

<br>

- $1 \leq X, T \leq 10^{15}$ (Џонас је врло посвећен Тетрису, **погледајте напомену**)
- $1 \leq Y \leq 1000$

<br>

Тест примери су подељени у 3 дисјунктнe групe:

<br>

-   У тест примерима вредним $20$ поена: $T \leq 2\cdot X$, $1 \leq X, T \leq 10^9$.
-   У тест примерима вредним $30$ поена: $1 \leq X, T \leq 1000$.
-   У тест примерима вредним $50$ поена: Без додатних ограничења.

<br>

## Примери

<br>

### Пример 1

#### Улаз

<br>

~~~
5 4 8
~~~
#### Излаз

<br>

~~~
12
~~~
#### Објашњење

<br>

Џонас ће одиграти $5$ минута Тетриса, након чега ће одморити $4$ минута. После тога, одиграће још $3$ минута Тетриса и тиме завршити $8$ минута играња.

<br>

### Пример 2

#### Улаз

<br>

~~~
3456 1 1800
~~~
#### Излаз

<br>

~~~
1800
~~~
#### Објашњење

<br>

Џонас ће одиграти свих $1800$ минута пре него што му буде била потребна пауза. 

<br>

### Пример 3

#### Улаз

<br>

~~~
305 534 13413413003
~~~
#### Излаз

<br>

~~~
36897880205
~~~
## Напомена

<br>

* Због величине бројева, користите 64-битне типове целих бројева (нпр. у C++ тип `long long`).
