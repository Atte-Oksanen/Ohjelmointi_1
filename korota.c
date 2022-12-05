#include <stdio.h>

int laskin (int luku1, int potenssi1);

int main (void){

    int
    luku,
    potenssi,
    tulos;

    printf("syota luku >");
    scanf("%d", &luku);
    printf("syota potenssi >");
    scanf("%d", &potenssi);

    tulos = laskin(luku, potenssi);
    printf("Luku %d korotettuna potenssiin %d on %d", luku, potenssi, tulos);



    }


int laskin (int luku1, int potenssi1){

    int
    muuttuja=luku1,
    kello=1,
    vastaus;

    while(kello < potenssi1) {
        luku1 = luku1 * muuttuja;
        kello = kello +1;
        }

    return(luku1);

    }
