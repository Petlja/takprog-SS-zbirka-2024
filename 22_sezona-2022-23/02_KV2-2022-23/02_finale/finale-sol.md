﻿---
title: Финале - опис решења
---

# Финале

Аутор: Марко Миленковић
Текст и тест примери: Марко Шишовић
Анализа решења: Јован Бенгин
Тестирање: Владимир Миловановић

###  Главно решење

Ако посматрамо путеве на рубу матрице, видимо да и сва поља на рубу (тј. први и последњи ред и колона) морају имати редара. Ако је $N \leq 2$ или $M \leq 2$, то значи да ће сва поља у матрици имати редара, па је у том случају решење $N \times M$.

Надаље претпостављамо да важи $N, M \geq 3$. Посматрајмо матрицу добијену брисањем првог и последњег реда и колоне - у овој новој $(N-2) \times (M-2)$ матрици ћемо тражити максималан број поља где не морамо поставити редаре, ако знамо да су сви путеви на рубу већ покривени. 
За свака два суседна поља важи да барем једно од њих има редара, јер иначе пут који их раздваја не би био покривен. Овај услов је и довољан, јер ће тада и сви путеви бити покривени.

Дакле, потребно је наћи највећи скуп поља у коме не постоје два суседна. Ово је познат задатак: обојимо матрицу шаховски црно-бело и узмемо сва поља оне боје која се више пута појављује. Пошто се број поља црне и беле боје разликује за највише један, биће $\lceil \frac{(N-2) \cdot (M-2)}{2} \rceil$ поља једне, и $\lfloor \frac{(N-2) \cdot (M-2)}{2} \rfloor$ поља друге боје. То значи да можемо имати максимално $\lceil \frac{(N-2) \cdot (M-2)}{2} \rceil$ поља без редара, па је минималан број редара $N \cdot M - \lceil \frac{(N-2) \cdot (M-2)}{2} \rceil$.



