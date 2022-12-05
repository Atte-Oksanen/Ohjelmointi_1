#include <stdio.h>
#include <stdlib.h>
#include <time.h>



 int main (void){

    int noppa1 = 0,
    noppa2 = 0,
    summa,
    n = 0,
    taulukko[11] = {0};

    srand(time(NULL));

    while(n < 36000) {
        summa = 0;
        noppa1 = 0;
        noppa2 = 0;

        noppa1 = 1 + rand() % 6;
        noppa2 = 1 + rand() % 6;
        summa = (noppa1 + noppa2) - 2;
        taulukko[summa] = taulukko[summa] + 1;
        n++;
        }

        n = 0;

        while (n < 11){
            printf("%d %d\n",n + 2, taulukko[n]);
            n++;
            }
        printf("YHTEENSA 36000");

return(0);
}
