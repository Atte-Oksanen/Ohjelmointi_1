#include <stdio.h>
#include <stdlib.h>
#include <time.h>



 int main (void) {

    int n = 0,
    y = 5,
    x = 0,
    taulukko[5] = {1,2,3,4,5};

     srand(time(NULL));

    while (n < 5){
        printf("%d", taulukko[n]);
        n++;
    }
    x = 1 + rand() % (n+1);
    printf("\n%d\n", x);
    n = 0;



   /* while (n < 5){
        printf("%d", taulukko[n]);
        n++;
    }*/

  n = 0;

 }






