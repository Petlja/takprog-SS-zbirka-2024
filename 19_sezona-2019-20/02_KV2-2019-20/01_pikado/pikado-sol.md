---
title: Пикадо - опис решења
---

# Пикадо

Аутор: Никола Пешић
Текст и тест примери: Лазар Миленковић
Анализа решења: Филип Ћосовић
Тестер: Никола Пешић

## Анализа

Потребно је наћи све елементе низа $A$ који се појављују бар $K$ пута у низу. Елементи низа $A$ су у интервалу $[-N,N]$ тако да постоји $2 \cdot N+1$ различитих вредности које се могу појавити у низу. Можемо искористити помоћни низ $B$ дужине $2 \cdot N+1$ који представља број појављивања сваког елемента у почетном низу.  

На почетку низ $B$ има вредност $0$ на свакој позицији. Једним проласком кроз низ $A$, када наиђеимо на елемент $A_i$, повећавамо број појављивања тог елемента за $1$. Пошто не можемо приступити негативним индексима број појављивања елемента који има вредност $X$, памтимо у низу $B$ на позицији $X+N$. Тако је интервал $[-N,N]$ пресликан у интервал $[0, 2 \cdot N]$ што нам омогућава да користимо низ. 

Проласком кроз низ $B$ пребројавамо и исписујемо све бројеве који су се појавили бар $K$ пута у низу. Ако за неко $j$ важи да је $B[j] \geq K$ то значи да се број $j-N$ појавио бар $K$ пута. 

Имплементација коришћењем низа је сложености $O(N)$. Може се користити и структура заснована на претраживачком стаблу (`std::map` сложености $O(N \log N)$) или хеш табела (`std::unordered_map` очекиване сложености $O(N)$), што нам омогућава решење и када су елементи низа $A$ много велики и немамо довољно меморије да направимо низ који обухвата све потенцијалне вредности.
