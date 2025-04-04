---
title: Гејм шоу
timelimit: 0.157
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

Управо је завршен трећи круг вечерашње епизоде познате емисије *Нокскру Гејм Шоу*, и ваш омиљени трочлани тим, "Сањиве Занатлије", губи резултатом 2-1, и тиме је пред испадањем. Због тога, морају однети победу у следећој игри: *Спринт 4*.

Игра *Спринт 4* је трка која се састоји из $N-1$ делова, у којима два играча трче по бројевној правој, брзином највише $1$. На почетку трке, играчи се налазе на позицијама $a_0$ и $b_0$. У $i$-том делу трке, тркачи треба да стигну од своје тренутне позиције, до позиција $a_i$ и $b_i$. Рачуна се да су прешли $i$-ти део када се нађу на позицијама $a_i$ и $b_i$ у неком распореду (није битно који играч стоји на којој од две позиције). Када се тренутни део заврши, следећи одмах отпочиње и такмичари крећу са тренутних позиција ка новим циљевима. Трка се завршава када се заврши $N-1$-ви део трке.

Како је трка јако неизвесна, Занатлијама је потребна ваша помоћ. На вама је да одредите најмање могуће време да би завршили трку.

## Опис улаза

У првом реду улаза се налази природан број $N$, дужина низова $a$ и $b$.<br>
У сваком наредном реду се налазе по два природна броја $a_i$ и $b_i$, који описују позиције циљева за $i$-ти део трке.

## Опис излаза

На излаз исписати један број: најмање време потребно да би завршили трку.

## Ограничења

-   $1 \leq N \leq 10^{5}$
-   $-10^9\le a_i,b_i \le10^9$

Тест примери су подељени у 4 дисјунктних група:

-   У тест примерима вредним $20$ поена: $N \leq 20$
-   У тест примерима вредним $20$ поена: $a_i=b_i$ важи за свако $0\le i\le N-1$.
-   У тест примерима вредним $15$ поена: $N \leq 1000$
-   У тест примерима вредним $45$ поена: Без додатних ограничења

## Пример 1

### Улаз

```
5
1 5
6 2
3 7
8 4
5 8
```

### Излаз

```
4
```

### Објашњење

За прва $3$ дела трке, сваки играч треба да се помери једно место удесно. У последњем делу, први играч треба да се помери једно место удесно ($4\rightarrow5$), док други треба да остане на својој позицији $8$.


