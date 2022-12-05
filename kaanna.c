#include <stdio.h>

    void kaantaja (int syote, int * luku1, int * luku2, int * luku3, int * luku4);


    int main (void) {

    int syote,
    luku1,
    luku2,
    luku3,
    luku4;

    printf("Syota nelinumeroinen kokonaisluku >");
    scanf("%d", &syote);

    kaantaja(syote, &luku1, &luku2, &luku3, &luku4);

    printf("Luku %d kaannettyna on %d%d%d%d", syote, luku1, luku2, luku3, luku4);

    return(0);
    }



    void kaantaja (int syote, int * luku1, int * luku2, int * luku3, int * luku4) {



    *luku1 = (syote % 10);

    *luku2 =(syote % 100) / 10;

    *luku3 =(syote % 1000) / 100;

    *luku4 =(syote / 1000);


    return(vastaus);
    }
