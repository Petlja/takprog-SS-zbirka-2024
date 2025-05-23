﻿---
title: Обарање руку - опис решења
---

# Обарање руку

Аутор: Павле Мартиновић
Текст и тест примери: Александар Вишњић
Анализа решења: Павле Мартиновић
Тестирање: Павле Мартиновић


### Решење када $N=4$

Овај задатак је могуће урадити грубом силом, али и ручно с обзиром да постоје само четири међусобно не-еквивалентна жреба, а то су $(1,2,3,4)$, $(1,3,2,4)$ и $(1,4,2,3)$, где сваком треба највише једна размена да би стигао до финала, осим најслабијем који свакако испада у првој рудни.

### Решење када $P_i=i$

У овом задатку, као и у сваком надаље, је кључно описати услов за једну особу да ли може да стигне до неке рунде. Подтурнир дефинишемо као скуп свих људи који играју да би један од њих прошао у $k$-то коло. Да ли особа $x$ може стићи до $k$-рунде зависи да ли има $2^{k-1}-1$ играча које може да победи, (јер да би стигао до $k$-те рунде, мора бити најјачи у његовом подтурниру), и да ли има довољно размена на располагању да избацимо све јаче људе из тог подтурнира. Уколико имамо довољно размена на располагању, онда само све те јаче људе унутар подтурнира заменимо са слабијим људима ван подтурнира, којих има довољно због првог услова. Тако да сада знамо да одговоримо на питање да ли учесник може да стигне до рунде $k$ ако знамо број размена и број јачих од њега у том подтурниру. Знамо да постоји укупно $N-1$ подтурнира, и сваки учествује у $\log_2N$ подтурнира. Када добијемо ново питање, можемо за сваки подтурнир у коме тај човек учестује да одредимо да ли може да буде победник ту (број размена нам је дат, а број јачих у подтурниру можемо лако одредити због специфичности пермутације) и одговоримо на сва питања у $O(Q\log N)$.

### Решење када је увек исти миљеник

За сваки подтурнир који садржи миљеника је могуће проћи кроз све људе и срачунати колико их има јачих од њега у $O(N)$, а затим одговарамо на питања исто ко у претходном подзадатку.

### Решење када $N\leq 17$, $Q\leq 100.000$

У сваком подтурниру можемо држати сортиран низ свих учесника тог турнира, а затим када хоћемо да видимо да ли миљеник може стићи до неког кола, бинарном претрагом по том низу сачуваном за тај подтурнир, можемо брзо наћи тачно колико њих је јачих у том подтурниру, и онда видети јел могуће стићи до тог кола исто као у другом подзадатку. Сложеност $O(N\log^2N+Q\log^2N)$.

### Главно решење

Радимо упите у тзв. `offline` начину. Сортирамо упите по томе колика је јачина човека који је миљеник, а затим по томе колико размена имамо на располагању. Када решимо све упите за неког миљеника, прођемо кроз све подтурнире у којима он учествује и додамо $1$ на неки бројач. Када сад решавамо упите за неког следећег миљеника, у бројачу за сваки подтурнир ће стајати број учесника тог подтурнира који су слабији од тренутно посматраног (из чега, наравно, одмах можемо да нађемо и број јачих од посматраног). Даље, пошто је број размена потребан да стигне до $k$-тог кола растућа фунцкија, тако да сада, преко информација у бројачима можемо наћи у $O(1)$ колико најмање размена треба да би стигао до тог кола. Пошто је низ упита сортиран, методом `2 pointers`, можемо одговорити на сваки упит за тренутног миљеника. Сложеност $O(N\log N+Q\log Q)$.
