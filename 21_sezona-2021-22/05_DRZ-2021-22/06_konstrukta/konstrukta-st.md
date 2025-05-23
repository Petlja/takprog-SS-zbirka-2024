---
title: Конструкта
timelimit: 1.309
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

Вероватно сте сви чули за Евровизију, једно од најпознатијих светских музичких такмичења. Ове године, на Евровизији ће учествовати тачно $N$ држава. Прошлогодишњи победник такмичења, Сванзибарија, одустао је из непознатих разлога. Како се финално такмичење приближава, потрбено је одлучити се која од $N$ држава учесница ће оргаинзовати финале. Између ових $N$ држава постоји тачно $N-1$ директних аутобуских линија, које повезују поједине парове држава. Линије која повезује две државе не пролазе кроз неку од осталих државе. Гарантује се да су линије тако конструисане да је могуће отпутовати од било које државе до било које друге одређеним подскупом линија. Не заборавите, ове $26101997$. године авиони су престали да лете и једино превозно средство су аутобуси.

Организатори желе најбоље могуће услове за све такмичаре, они су одлучили да организују такмичење у држави у којој сви такмичари могу стићи што је брже могуће. Ово подразумева да максималан број линија које морају представници једне државе да промене да би дошли до места финала буде што је мањи могућ.

Наравно, то није све! Да би додатно олакшали пут, организатори су решили да конструишу тачно још једну директну аутобуску линију између две различите државе између које она до сада није постојала. На тај начин, број линија који ће представници појединих држава променити да би дошли до финала може да се смањи.

Помозите организаторима да одлуче између које две државе ће конструисати директну аутобуску линију и где ће се одржати финале Евровизије.

**Напомена**: Ваша одлука се сматра исправном ако не постоји неки други начин за конструисање додатне аутобуске линије и бирање места одржавања финала који доводи до тога да број линија који пређу представници најудаљеније државе буде мањи.

## Опис улаза

Први ред стандардног улаза садржи природан број $N$, број држава које учествују на Евровизији. Сваки од наредних $N - 1$ редова садржи по два природна броја $u$, $v$, индексе држава које су повезане директном аутобуском линијом.

## Опис излаза

У првом реду стандардног излаза исписати редне бројеве држава између којих ће се конструисати додатна аутобуска линија. У другом реду излаза исписати државу у којој ће бити организована Евровизија.

## Ограничења

* $3\leq N \leq 2 \cdot 10^5$,
* $1\leq u \neq v \leq N$.

## Подзадаци

1. (16 поена) Сваки град је повезан са највише два друга града директном линијом.
2. (13 поена) $N \leq 100$
3. (12 поена) $N \leq 400$
4. (26 поена) $N \leq 2000$
5. (33 поена) Без додатних ограничења


## Пример 1

### Улаз

```
5
1 2
1 3
1 4
1 5
```

### Излаз

```
2 3
1
```

### Објашњење примера

Додатна аутобуску линију можемо саградити између држава са индексима $2$ и $3$ и за место одржавања Евровизије бирамо државу са индексом $1$. Представници државе са индексима $2$, $3$, $4$ и $5$ морају променити једну аутобуску линију, док представници организатора не морају користи аутобус. У овом примеру постоје и друге могућности за конструисање додатне аутобуске линије које доводе до оптималног решења.

