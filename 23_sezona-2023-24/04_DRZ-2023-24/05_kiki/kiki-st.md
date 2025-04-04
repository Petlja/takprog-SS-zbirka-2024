---
title: Кики
timelimit: 1.368
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

Лимени је покидао државно такмичење из програмирања и као награду је добио необојено стабло (повезан ацикличан граф)! У паковању су такође биле и две бесконачно велике кантице са бојама - плава и црвена. Стабло које је добио на поклон је мало специфично по томе што нису сви чворови исте величине, па је и различита количина боје која је потребна да се обоје различити чворови. Наиме, да би се $i$-ти чвор обојио, потребно је $a_i$ количине боје из једна од кантица.

Осим што је врхунски програмер, Лимени је и шаптач птица, па је истренирао свог папагаја Кикија да игра једну игру бојења над овим стаблом. Правила игре су следећа:

* Лимени и Кики играју наизменично, а Лимени игра први.
* Играч који је на потезу бира један од необојених чворова и боји га произвољном бојом (плавом или црвеном), али тако да ниједан од његових суседа није обојен истом том бојом.
* Игра се завршава када више не постоји чвор који може бити обојен.

На крају игре је победник Лимени уколико је сваки чвор стабла обојен, а у супротном Кики.

Како је Кики јако добро истрениран и игра оптимално у сваком тренутку, договорили су се да Лимени може да у свом првом потезу обоји произвољан број чворова произвољним бојама (дакле, могуће је да неколико чворова обоји црвеном бојом, а неколико других чворова плавом). Како би игра била што занимљивија, интересује их колико најмање боје у свом првом потезу Лимени мора да потроши тако да загарантује победу.

Уколико постоји више решења, исписати било које.

## Опис улаза

У првој линији стандардног улаза, налази се један природан број $N$, који представља број чворова у стаблу.

У другој линији стандардног улаза, налази се $N$ природних бројева $a_1, a_2, \ldots, a_n$, који представљају колика количина боје је потребно да се чворови $1, 2, \ldots, N$ редом обоје.

У наредних $N-1$ линија стандардног улаза, налазе се по $2$ природна броја. У $i$-том од $N-1$ редова, дата два природна броја $u_i$ и $v_i$ означавају да постоји грана између чворова са индексима $u_i$ и $v_i$. 

## Опис излаза

У првој линији стандардног излаза исписати најмању количину боје $X$ коју Лимени мора да потроши у првом потезу како би осигурао победу против Кикија.

У другој линији стандардног излаза исписати број $R$ - колико чворова Лимени треба да обоји црвеном бојом у првом потезу.
У трећој линији стандардног излаза исписати $R$ природних бројева, који представљају скуп чворова које Лимени треба да обоји црвеном бојом у првом потезу.

У четвртој линији стандардног излаза исписати број $B$ - колико чворова Лимени треба да обоји плавом бојом у првом потезу.
У петој линији стандардног излаза исписати $B$ природних бројева, који представљају скуп чворова које Лимени треба да обоји плавом бојом у првом потезу.

Уколико постоји више решења, исписати било које.

## Пример 1


### Улаз


```
5
2 2 2 2 2
1 2
2 3
3 4
4 5
```



### Излаз


```
4
2
2 4
0
```

## Објашњење примера

Једно од могућих решења јесте да Лимени обоји чворове $2$ и $4$ црвеном бојом, што захтева $4$ количине боје. На овај начин, у следећим потезима и Кики и Лимени су приморани да боје чворове $1$, $3$ и $5$ плавом бојом, како не би постојала два суседна чвора исте боје. 

## Пример 2


### Улаз


```
6
1 2 3 4 5 6
1 3
3 5
3 4
5 2
6 5
```



### Излаз


```
8
1
3
1
5
```

## Објашњење примера

У овом примеру, оптимално је да Лимени обоји чворове $3$ и $5$ редом црвеном и плавом и тиме потроши $8$ количине боје. До краја игре чворови $1$ и $4$ морају бити обојени плавом, а чворови $2$ и $6$ црвеном бојом.


## Ограничења


* $4 \leq N  \leq 2\cdot 10^5$
* $1 \leq a_i \leq 10^9$, за $i = 1, 2, \ldots, N$

Тест примери су подељени у шест дисјунктних група:

* У тест примерима вредним 10 поена: $4 \leq N \leq 20$.
* У тест примерима вредним 5 поена: Чвор $1$ је повезан са чворовима $2, 3, \ldots, N$.
* У тест примерима вредним 10 поена: Чвор $i$ је повезан са чвором $i+1$, за $i=1,2,\ldots,N-1$.
* У тест примерима вредним 20 поена: $4 \leq N \leq 1000$.
* У тест примерима вредним 20 поена: Све тежине су једнаке међусобно, односно $a_1 = a_2 = \ldots = a_N$.
* У тест примерима вредним 35 поена: Без додатних ограничења.




