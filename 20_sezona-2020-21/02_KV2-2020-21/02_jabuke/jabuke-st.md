---
title: Фриленс узгајивачи јабука
timelimit: 0.508
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

Можда нисте знали, али узгајање јабука је постало врло исплатив и уносан бизнис у свету. На свету постоји $N$ узгајивача јабука, $i$-ти узгајивач зарађује $A_i$ долара годишње. Ипак ствари нису тако једноставне због Светскe порескe агенцијe узгајивача јабука (у наставку текста СПАУЈ). СПАУЈ жели да уведе фиксан годишњи порез за све узгајиваче јабука (фиксан проценат од зараде који би узгајивачи плаћали). Узгајивачи су схватили да ако порез буде сувише висок они уопште неће радити, само да СПАУЈ не би зарадио неки долар од њих. Конкретније, ако порез буде **стриктно већи** од $P_i$ процената, $i$-ти узгајивач ће одустати од посла.

Нас интересује колико највише може зарадити СПАУЈ годишње у доларима ако оптимално постави порез. 

## Опис улаза

* У првој линији стандардног улаза налази се природан број $N$, број узгајивача јавука у свету.

* У свакој од наредних $N$ линија стандардног улаза налази се по два броја, $A_i$ и $P_i$, почетна зарада $i$-тог узгајивача и максималан порез у процентима који $i$-ти узгајивач жели прихватити.   

## Опис излаза

У јединој линији стандардног излаза исписати максималну годишњу зараду СПАУЈ-а.

## Ограничења

* $1 \leq N \leq 2\cdot 10^5$,
* $1 \leq A_i \leq 10^6$,
* $0 \leq P_i \leq 100$,
* Елементи низа $P$ су ненегативни реални бројеви са највише две децимале.

Тест примери су подељени у четири дисјунктне групе:

* У тест примерима вредним $20$ поена: $N \leq 1000$.
* У тест примерима вредним $20$ поена: елементи низа $P$ су цели бројеви.
* У тест примерима вредним $20$ поена: сви елементи низа $A$ су једнаки.
* У тест примерима вредним $40$ поена нема додатних ограничења.

## Напоменe

* Да би се резултат признао као тачан, апсолутна грешка мора бити мања од $10^{-2}$.
* Због величине резултата, користите 64-битне типове реалних бројева (нпр. у C++ тип `double`).

## Пример 1

### Улаз

~~~
4
100001 83.2
40001 20
90001 77.32
300001 1.88
~~~

### Излаз

~~~
146909.5464
~~~

### Објашњење

За СПАУЈ је оптимално да постави порез од $77,32\%$. У том случају би други и четврти узгајивач одустали од посла, док би први и трећи дали $77,32\%$ од своје зараде. На овај начин, СПАУЈ би зарадио $(100001 + 90001) \cdot 77.32\% = 146909.5464$ долара годишње. 



