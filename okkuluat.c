#include <stdio.h>


 int main (void) {

    int taulukkoA [10],
    taulukkoB[10],
    laskuriA = 0,
    laskuriB = 9;

    while (laskuriA < 10){
            printf("Syota %d. luku >", laskuriA + 1);
            scanf("%d", &taulukkoA[laskuriA]);
            laskuriA++;
            }

    laskuriA = 0;

    while (laskuriA < 10){
        taulukkoB[laskuriB] = taulukkoA[laskuriA];
        laskuriA++;
        laskuriB--;
    }

    laskuriA = 0;

    while (laskuriA < 10){
        printf("%d  %d\n", taulukkoA[laskuriA], taulukkoB[laskuriA]);
        laskuriA++;
    }




 }
