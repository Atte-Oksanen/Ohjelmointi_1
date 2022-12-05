

    #include <stdio.h>

    int main(void){

    int luku1,
    luku2,
    luku3,
    luku4,
    luku5,
    luku6,
    luku7,
    luku8,
    luku9,
    luku10,
    suurin;

    printf("luku >");
    scanf("%d", &luku1);

    printf("luku >");
    scanf("%d", &luku2);

    printf("luku >");
    scanf("%d", &luku3);

    printf("luku >");
    scanf("%d", &luku4);

    printf("luku >");
    scanf("%d", &luku5);

    printf("luku >");
    scanf("%d", &luku6);

    printf("luku >");
    scanf("%d", &luku7);

    printf("luku >");
    scanf("%d", &luku8);

    printf("luku >");
    scanf("%d", &luku9);

    printf("luku >");
    scanf("%d", &luku10);

    if (luku1 > luku2) {
        suurin = luku1;
        }

    else  {
        suurin= luku2;
        }

    if (suurin < luku3) {
        suurin = luku3;
    }

     if (suurin < luku4) {
        suurin = luku4;
    }

    if (suurin < luku5) {
        suurin = luku5;
    }

    if (suurin < luku6) {
        suurin = luku6;
    }

    if (suurin < luku7) {
        suurin = luku7;
    }

    if (suurin < luku8) {
        suurin = luku8;
    }

    if (suurin < luku9) {
        suurin = luku9;
    }

    if (suurin < luku10) {
        suurin = luku10;
    }
     printf("Suurin syottamasi luku oli %d", suurin);

     return(0);
    }


