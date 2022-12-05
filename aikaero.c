#include <stdio.h>


int kello (int tunti, int minuutti, int sekunti);

int main (void){

    int
    tunnit,
    minuutit,
    sekunnit,
    muutos1,
    muutos2,
    tulos;



        printf("syota tunnit >");
        scanf("%d", &tunnit);
        printf("syota minuutit >");
        scanf("%d", &minuutit);
        printf("syota sekunnit >");
        scanf("%d", &sekunnit);

        muutos1 = kello(tunnit, minuutit, sekunnit);

        printf("syota tunnit >");
        scanf("%d", &tunnit);
        printf("syota minuutit >");
        scanf("%d", &minuutit);
        printf("syota sekunnit >");
        scanf("%d", &sekunnit);

        muutos2 = kello(tunnit, minuutit, sekunnit);

        tulos = muutos2 - muutos1;

        if(tulos < 0){
            tulos = tulos * -1;
            }

        tunnit = tulos / 3600;
        minuutit = (tulos - (tunnit * 3600)) / 60;
        sekunnit = tulos - (tunnit * 3600)-(minuutit * 60);

        printf("Aikaero on: %d sekuntia \nAika on %d tuntia %d minuuttia %d sekuntia",tulos, tunnit, minuutit, sekunnit);




    return(0);
    }


    int kello (int tunti, int minuutti, int sekunti) {

    int tulos;

    tulos = ((tunti * 60) * 60) + (minuutti * 60) + sekunti;

    return(tulos);


    }
