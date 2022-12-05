
    #include <stdio.h>

    int main (void) {

    double bensa=0,
    kilsat=0,
    kulutus,
    kokonaiskulutus,
    keskikulutus,
    keskimatka,
    keskibensa;


        while(bensa != bensa - 1) {

                printf("\n Anna tankatun bensiinin maara ( -1 lopettaa ) >");
                scanf("%lf", &bensa);
                    if(bensa == -1)
                        break;

                printf("Ajetut kilometrit >");
                scanf("%lf", &kilsat);

                kulutus = (bensa * 100) / kilsat;

                printf("Keskikulutus talla tankkauksella on %.3f litraa satasella", kulutus);
                keskibensa = keskibensa + bensa;
                keskimatka = keskimatka + kilsat;

                }

    kokonaiskulutus = (keskibensa * 100) / keskimatka;
    printf("kokonaiskeskikulutus on %f litraa satasella", kokonaiskulutus);

    return(0);
    }
