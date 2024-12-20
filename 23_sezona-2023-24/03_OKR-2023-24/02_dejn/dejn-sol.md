---
title: Дејн - опис решења
---

# Дејн

Аутор: Андреј Ивашковић
Текст и тест примери: Марко Миленковић
Анализа решења: Владимир Миловановић
Тестирање: Андреј Ивашковић

### Главно решење

Пошто је већ дат целобројни низ $t$ у коме чланови низа $t_i$ ако су строго позитивни, $t_i>0$, представљају излазак, а уколико су негативни, $t_i<0$ улазак, то је најсврсисходније најпре испитати да ли је број излазака једнак броју улазака и исписати `-1` ако се утврди да број строго позитивних чланова не одговара броју негативних чланова низа. Ово пребрајање позитивних и негативних чланова могуће је извести једним проласком кроз све чланове низа, односно у временској сложености $\mathcal{O}(n)$, где је $n$ број чланова низа.

Да би се олакшало даље испитивање задати низ $t$ се може затим сортирати по апсолутној вредности без мутирања истог тако да се добије монотоно растући низ, тачније монотоно неопадајући низ према апсолутној вредности јер се вредности у низу могу понављати. Сортирање је могуће извршти у временској сложености $\mathcal{O}(n \log n)$ користећи се неким од ефикасних алгоритама или библиотечким функцијама које их користе.

Када је низ сортиран, на једноставан начин могуће је довршити проверу да ли је он заиста и исправан. Наиме, сви јединствени чланови низа на парним индексима (укључујући и први) морају бити позитивни, а на непарним (укључујући и последњи) негативни, поштујући конвенцију да први члан низа има нулти индекс. Приметити да сви исправни низови имају парну дужину (на основу услова да број позитивних чланова мора бити једнак броју негативних), односно да је $n$ дељиво са два. Стога, ако су се први излазак и последњи улазак десили у јединственим временским тренуцима то је први члан сортираног низа позитиван, а последњи негативан.

При провери исправности низа, неопходно је у обзир узети и случајеве у којима се изласци и уласци дешавају у истом временском тренутку јер приликом сортирања ових тренутака по апсолутној вредности у општем случају не добијамо подниз алтернирајућих знаковних вредности. Када се коначно утврди исправност низа, укупно време се рачуна тако што се сукцесивно од сваког тренутка уласка одузме њему одговарајући, то јест њему претходећи тренутак изласка и направи збир свих оваквих разлика. Тражену суму разлика апсолутних вредности свих узастопних непарних и парних чланова већ сортираног низа такође је могуће пронаћи у линеарној временској сложености $\mathcal{O}(n)$, баш као и проверу исправности тог низа.

Коначно, како је најсложенија операција у претходно описаном решењу заправо алгоритам сортирања, то $\mathcal{O}(n \log n)$ представља укупну временску сложеност решења овог задатка која је логлинеарна по дужини улазног низа. Иако је задатак било могуће решити и без употребе сортирања у линеарној временској сложености $\mathcal{O}(n)$ користећи се неким мало напреднијим структурама података, ово решење се није захтевало за максималан број поена на овом нивоу такмичења.

