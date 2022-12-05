#include <stdio.h>
#include <string.h>


int main (void){

    int taulukko[10] = {1,2,3,4};

    int n = 0;

    while(taulukko[n] != 0){
        n++;
    }
    taulukko[n] = 15;

    n = 0;

      while(taulukko[n] != 0){
        printf("%d\n", taulukko[n]);
        n++;
    }


}
