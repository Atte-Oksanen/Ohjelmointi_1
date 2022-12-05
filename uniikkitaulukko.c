#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 void taulukkosuodatin (void);

 int main (void) {

   taulukkosuodatin();

    return(0);
 }




 void taulukkosuodatin (void){

    int n = 0,
    y = 19,
    x = 0,
    temp,
    taulukko[20] = {0};

    srand(time(NULL));

    while (n < 20){
        taulukko[n] = n + 1;
        n++;
    }

    n=0;

    while (n < 20){
        x = rand() % (n+1);

        temp = taulukko[x];
        taulukko[x] = taulukko [y];
        taulukko[y] = temp;

        n++;
        y--;
        }

    n=0;
    while (n < 20){
        printf("%d ", taulukko[n]);
        n++;
    }
 }
