#include <stdio.h>
#include <stdlib.h>
#include <time.h>



 int main (void) {

    int n = 0,
    y = 19,
    x = 0,
    temp,
    taulukko[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

     srand(time(NULL));

    while (n < 20){
        printf("%d", taulukko[n]);
        n++;
    }

    n=0;

    while (n < 20){
        x = rand() % (n+1);
        printf("\n%d\n", x);

        temp = taulukko[x];
        taulukko[x] = taulukko [y];
        taulukko[y] = temp;

        n++;
        y--;
        }











  n = 0;
  while (n < 20){
        printf("%d  ", taulukko[n]);
        n++;
  }

 }

