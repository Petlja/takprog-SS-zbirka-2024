﻿# Viae Romanae
Аутор:  Алекса Милисављевић
Текст и тест примери: Алекса Милисављевић
Анализа решења: Алекса Милисављевић
Тестирање: Павле Мартиновић



## Решење када је $M \leq 15 $, $ Q \leq 1.000 $
Симулирамо одабир свих парова путева. Сложеност овог решења је $O(Q \cdot 2^N)$.

## Решење када је $N, M, Q \leq 200$
Нека је $T(u)$ скуп чворова $v$ таквих да сваки најкраћи пут од $1$ до $u$ пролази кроз $v$. Приметимо да овакав скуп можемо пронаћи избацивањем сваког чвора из графа и проверавањем да ли се повећало растојање до чвора $u$. Приметимо да је решење управо $|T(X[i]) \cap T(Y[i])|$. Овакве скупове је могуће пронаћи коришћењем Дијкстриног алгоритма. За сваки упит, можемо да пронађемо $T(X[i])$ и $T(Y[i])$ и потом њихов пресек. Сложеност овог решења је $O(Q \cdot N \cdot M \log M)$.



## Решење када је $N, M \leq 2.000$, $Q \leq 5.000$
Потребно је да оптимизујемо решење претходног задатка тако што ћемо пронаћи скупове $T(u)$ пре одговарања на упите. Сложеност овог решења је $O(N \cdot M \log M + N \cdot Q)$.



## Решење када је $N, M \leq 3.000$
Овај подзадатак има два решења. Можемо оптимизовати претходни коришћењем битсета. За алтернативно решење, које наводи на решење целог задатка, можемо приметити да скупови $T$ формирају структуру стабла. Наиме, за свако $u$, постоји јединствено $v \in T(u)$ тако да $T(u) = T(v) \cup \{u\}$. Означимо такво $v$ са $p(u)$ и формирајмо стабло у којем је родитељ чвора $u$ управо $p(u)$. Одговор на упит је дубина најдубљег заједничког претка (LCA) чворова $X[i]$ и $Y[i]$. Сложеност овог решења је $O(N \cdot M \log M + Q \log N)$.


## Решење када $M = N - 1$ и сваки град је повезан са највише $2$ пута
Граф можемо представити као низ. Одговор на упит је величина пресека два интервала. Сложеност овог решења је $O(N + Q)$.


## Решење када је $M = N - 1$
Одговор на упит је дубина најдубљег заједничког претка (LCA) чворова $X[i]$ и $Y[i]$. Сложеност овог решења је $O(N \cdot M \log M + Q \log N)$.


## Главно решење
За цело решење морамо да оптимизујемо процес конструкције стабла из четвртог подзадатка. Приметимо да стабло можемо да конструишемо паралелно са извршавањем Дијкстриног алгоритма. Нека је чвор који процесирамо у неком кораку управо $u$. Нека је $S(u)$ скуп чворова $v$ таквих да је грана $v - u$ на неком најкраћем путу од $1$ до $u$. Приметимо да је тада $p(u) = LCA(S(u))$, где је $LCA(X)$ најдубљи заједнички предак свих чворова из скупа $X$. Приметимо да смо све чворове из скупа $S(u)$ већ обрадили. Према томе, можемо да додамо чвор $u$ у стабло, као дете чвора $p(u)$ и да ажурирамо $LCA$ табелу. Сложеност овог решења је $O(M \log M + Q \log N)$.
