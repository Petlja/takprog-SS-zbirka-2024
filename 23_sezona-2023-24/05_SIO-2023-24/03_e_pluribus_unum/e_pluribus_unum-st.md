На II Бактеријади која се ове године одржава у граду Месеца окупило се $N$ бактерија. Оне су познате по пристојном понашању, вредном раду и неконзумирању антибиотика. Сам догађај је савршена прилика да се најбоље бактерије у Римском царству здруже и поделе искуства. Међу њима успостављено је $M$ парова суседства (која су по природи двосмерна).

<br>

На почетку нултог дана (индексирамо од нуле јер међу овим бактеријама има и програмера), $i$-та бактерија (индексирамо од $1$ до $N$ јер међу њима има и математичара) има величину $S_i$. Тачно $N-1$ њих се храни аутотрофно, а једна је миксотроф. На крају дана, сви аутотрофи порасту са $1$ (промене се акумулирају). Миксотроф пре почетка сваког дана има два избора - да буде у аутотрофној или хетеротрофној форми. Ако је у аутотрофној форми, на крају дана се и његова величина повећа за $1$. Ако изабере хетеротрофну форму, онда може појести произвољан број суседа, али са условом. Нека је бактерија $i$ миксотроф у аутотрофној форми и $j$ њен сусед. $S_i$ може појести $S_j$ ако и само ако $S_i \geq S_j$ (чудно би било да мања бактерија поједе већу). Тада се бактерији $i$ величина мења са $S_i$ на $S_i + S_j$. Додатно, $j$ нестаје, а суседи од $j$ сада постају суседи од $i$ (с тим да бактерија није суседна самој себи). Напомињемо да у једном дану миксотроф у хетеротрофној форми може појести произвољан број суседа (и старих и нових) докле год му величина то дозвољава. Могуће је да поједе и суседа ког на почетку дана није смео, а да је у међувремену довољно нарастао. Тек на крају дана све аутотрофне бактерије нарасту (и миксотроф ако је био у тој форми - хетеротрофи не расту). Поједени аутотрофи не могу нарасти.


<br>

crafted-dir: testcases
За датог миксотрофа, потребно је одредити први дан у коме може појести све остале бактерије ако своје форме и једење суседа бира оптимално. Како миксотроф није познат, на питање је потребно одговорити за сваку бактерију $i$ ($1 \leq i \leq N$).

## Описи функција

Потребно је да имплементирате функцију

-   $OdrediVreme(N, M, S[\ldots],U[\ldots],V[\ldots],T[\ldots])$

Ова функција ће бити позвана једном по примеру. Бројеви $N$ и $M$ представљају број бактерија и број суседства. Низ $S$ је дужине $N$ и представља величину сваке бактерије на почетку нултог дана. Низови $U$ и $V$ дужине $M$ представљају парове суседства. За $i$ ($1 \leq i \leq M$), кажемо да су бактерије $U_i$ и $V_i$ суседне. Гарантује се да ниједан пар није наведен више од једном, као и да постоји листа познанстава која повезује сваке две бактерије. Низ $T$ је дужине $N$, а ваш одговор на питање из текста задатка за $i$-ту бактерију треба да упишете у $T[i]$. Тачније, када би $i$-та бактерија била миксотроф, потребно је одредити први дан у коме може појести све остале бактерије. Уколико то није могуће учинити у коначно много дана, уписати $-1$.
   **Сви низови су индексирани од 1.**
   **Дани су индексирани од 0.**
 
## Пример

Нека је $N=5$, $M=4$, $S=\{1,1,7,10,10\}$, $U=\{1,2,3,3\}$, $V=\{2,3,4,5\}$. У низ $T$ је потребно уписати $\{5,5,1,0,0\}$. Размотримо случај када је трећа бактерија миксотроф. У нултом дану, она бира аутотрофну форму. Тада величине бактерија постају $S=\{2,2,8,11,11\}$. На почетку првог дана, миксотроф бира хетеротрофну форму. Најпре, поједе бактерију $2$. Тиме величина миксотрофа постаје $10$ и бактерија $1$ му постаје сусед. Када и њу поједе, величина му се повећа на $12$. Сада је у стању да поједе и преостале две бактерије. Дакле, дан $1$ је први дан у коме може појести све бактерије.

<br>

Нека је $N=5$, $M=7$,  $S=\{1,2,3,2,9\}$, $U=\{1,1,1,1,2,2,4\}$, $V=\{2,3,4,5,3,5,5\}$. У низ $T$ је потребно уписати $\{-1,2,2,2,0\}$. Размотримо случај када је четврта бактерија миксотроф. У нултом дану бира хетеротрофну форму и поједе бактерију $2$. Тиме величина миксотрофа постаје $4$. Величине бактерија постају $S=\{2,-,4,4,10\}$. У првом дану, миксотроф такође бира хетеротрофну форму. Најпре поједе бактерије $3$ и $1$. Затим може појести и $5$. Тиме је миксотроф појео све остале бактерије у дану $1$.

## Ограничења
*   $2 \leq N \leq 2\cdot 10^5$,
*   $1 \leq M \leq 2\cdot 10^5$,
*   $1 \leq S_i \leq 10^9$.


## Подзадаци
*   (7 поена): $N,M \leq 500$;
*   (15 поена): $N\leq 40\,000$, $M = N-1$ и $U[i]=i$, $V[i]=i+1$ ($1 \leq i \leq N-1$);
*   (12 поена): $M = N-1$ и $U[i]=i$, $V[i]=i+1$ ($1 \leq i \leq N-1$);
*   (29 поена): $S_i \leq 20$ за $1 \leq i \leq N$;
*   (37 поена): Без додатних ограничења.

## Детаљи имплементације

Потребно је да пошаљете тачно један фајл  `e_pluribus_unum.cpp`  који имплементира поменуте функције. Осим тражених функција, ваш фајл може садржати и додатне глобалне променљиве, помоћне функције и додатне библиотеке.

Ваша функција мора бити следећег облика:

`void OdrediVreme(int N, int M, int* S, int *U, int *V, int *T);`

**Вашим програмима је дозвољено да мењају садржај низова али не смеју да приступају ван граница датих низова.**

Уз задатак, обезбеђен вам је "template" фајл  `code.cpp`  који можете користити и мењати по потреби. Такође вам је обезбеђен програм  `grader.cpp`  који служи да лакше тестирате кодове. Овај програм учитава са стандардног улаза следеће податке:

-   У првом реду бројеви $N$ и $M$.
-   У наредном реду $N$ бројева: $S[i]$.
-   У наредних $M$ редова по $2$ броја $U[i]$ и $V[i]$.

Затим овај програм зове вашу функцију и исписује резултат који ваша функција врати.

