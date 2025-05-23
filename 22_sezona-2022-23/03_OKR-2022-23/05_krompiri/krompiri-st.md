---
title: Кромпири
timelimit: 0.293
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

<br>

Чувени астро-ботаничар Матеја Дејмон се још од 2017. године успешно бави узгојем кромпира на Марсу захваљујући помоћи такмичара из информатике.

Он је ове године одлучио да направи нову фарму кромпира на Марсу и поново му је потребна ваша помоћ. Њему је на располагању плодно марсовско земљиште димензија $N \times M$ које је он изделио на $N \cdot M$ јединичних поља. На сваком пољу је могуће посадити одређен број кромпира, међутим, због посебног састава марсовског земљишта у реду $i$ укупно не сме бити мање од $a_i$ нити више од $b_i$ кромпирa (за свако $i = 1,2,\ldots,N$). Такође, у колони $j$ укупно не сме бити мање од $c_j$ нити више од $d_j$ кромпира (за свако $j = 1,2,\ldots,M$).

Помозите Матеји да одреди распоред кромпира који ће максимизовати његов принос, тј. помозите му да посади што више кромпира.
  
<br>

## Опис улаза

<br>

У првом реду стандардног улаза налазе се, редом, два цела броја $N$ и $M$ - димензије земљишта.

У наредних $N$ редова налазе се по два цела броја $a_i$ и $b_i$ - ограничења за $i$-ти ред.

У наредних $M$ редова налазе се по два цела броја $c_j$ и $d_j$ - ограничења за $j$-ту колону.

<br>

## Опис излаза

<br>

У првом реду стандардног излаза исписати максималан број кромпира који Матеја може да посади.

У другом реду исписати број $K$ - број поља на којима треба посадити кромпире.

У наредних $K$ редова исписати по три цела броја $x$, $y$ и $n$ ($1 \leq x \leq N$, $1 \leq y \leq M$, $n \geq 0$), редом, који означавају да на пољу у пресеку $x$-тог реда и $y$-те колоне треба посадити $n$ кромпира.

Распоред кромпира мора бити такав да поштује сва ограничења из текста задатка. **Уколико има више решења, исписати било које.**
  
<br>

## Пример 1

<br>

### Улаз

<br>

```
2 2
1 2
1 1
1 3
0 0
```

<br>

### Излаз

```
3
2
1 1 2
2 1 1
```

<br>

### Објашњење

<br>

У табели испод је приказан један могући распоред кромпира који задовољава ограничења и максимизује принос (изрази облика $x-y$ у табели означавају доњу и горњу границу за број кромпира у одговарајућем реду/колони).

<br>

| | 1-3 |0-0|
| ---        |    :----:   |          :---: |
|**1-2**| 2 | 0 |
|**1-1**| 1 | 0 |

<br>
	
## Пример 2

<br>

### Улаз

<br>

```
2 3
2 2
2 2
1 2
1 2
1 2
```

<br>

### Излаз

<br>

```
4
4
1 1 1
1 3 1
2 2 1
2 3 1
```

<br>

### Објашњење

<br>

У табели испод је приказан један могући распоред кромпира који задовољава ограничења и максимизује принос.

<br>

| | 1-2 |1-2| 1-2 |
| ---   |    :----:   | :---: | :---:|
|**2-2**| 1 | 0 | 1 |
|**2-2**| 0 | 1 | 1 |
  
<br>

## Ограничења

  <br>

- $1 \leq N, M \leq 50000$,
- $0 \leq a_i \leq b_i \leq 10^9$,
- $0 \leq c_i \leq d_i \leq 10^9$.
- **Гарантује се да постоји распоред кромпира који задовољава све услове**

<br>

Тест примери су подељени у пет дисјунктних група:

 <br>

- У тестовима вредним 10 поена: $N=M, a_i \leq c_i \leq b_i \leq d_i$.

- У тестовима вредним 10 поена: $a_i = b_i, c_i = d_i$.

-  У тестовима вредним 15 поена: $a_i = b_i$.

- У тестовима вредним 15 поена: $N = 1$.

- У тестовима вредним 30 поена: $a_i = c_i = 0$.

- У тестовима вредним 20 поена: Без додатних ограничења.



