﻿---
title: Велика трка - опис решења
---

# Велика трка

Аутор: Павле Мартиновић
Текст и тест примери: Павле Мартиновић
Анализа решења: Павле Мартиновић
Тестирање: Алекса Милисављевић

### $N,Q\leq 1000$
У овом подзадатку можемо лако симулирати сваки део трке, ако део трке креће у $(x,y)$ и иде преко стуба $(x',y')$, онда се завршава у тачки $(2x'-x,2y'-y)$, и нађемо где се завршава у сложености $O(NQ)$.
### Сви стубови су на истом месту
Оно што треба приметити у овом подзадатку да ће после свака два дела трке да се тркачи врате на стартну позицију, па је једино заправо битна парност броја $r-l$, и у зависности од њега можемо да одредимо да ли се трка завршава тамо где и почиње или централно симетрично томе у односу на стубове.
### Све $y$ координате су $0$
Решавамо случај на бројевној правој. Ако је почетак трке на позицији $x_0$, а стубови на $x_1,x_2\cdots,x_n$. Онда је крај првог дела трке на $2x_1-x_0$, другог дела трке на $2x_2-(2x_1-x_0)=2x_2-2x_1+x_0$, $\cdots$, $n$-тог дела трке на $2x_n-2x_{n-1}+2x_{n-2}-\cdots+2\cdot(-1)^{n-1}x_{1}+(-1)^{n}x_0$. Ово значи да ако памтимо парцијалне суме облика $x_1-x_2+x_3-x_4+\cdots$, одузимањем две парцијалне суме и обраћањем пажње на парност можемо да нађемо коначну позицију трке у сложености $O(N+Q)$
### Комплетно решење
У овом случају је довољно приметити да можемо раздвојити проблем ко координатама и обе координате независно решимо као у претходном подзадатку у сложености $O(N+Q)$.
