#include <stdio.h>

int main (void) {

int luku = 28,
laskuri = 2,
liuku=luku,
summa=0;

 while (liuku > 1 ) {
    liuku = luku;
    liuku = luku / laskuri;
    if (luku % laskuri == 0){
        summa = summa + liuku;
        }

    laskuri = laskuri + 1;
 }
summa = summa + 1;
printf("%d", summa);
return(0);
}
