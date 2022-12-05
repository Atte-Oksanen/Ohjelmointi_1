 #include <stdio.h>

    int laskin (int n);


    int main (void){

    int luku,
    tulos;

    printf("Syota viisinumeroinen binaariluku >");
    scanf("%d", &luku);

    while ((luku % 10 != 0 && luku % 10 != 1) || luku < 0 || luku > 99999 ) {

        printf("Vaara syote. Anna uusi syote. \nSyota viisinumeroinen binaariluku >");
        scanf("%d", &luku);
        }

    tulos = laskin(luku);
   // printf("%d", tulos);
    return(0);
    }


    int laskin (int n){
    printf("%d", n);
    int luku1,
    luku2,
    luku3,
    luku4,
    luku5,
    loppu;

    luku1 = (n % 10);
    luku2 = ((n % 100) / 10)*2;
    luku3 = ((n % 1000) / 100)*2;
    luku4 = ((n % 10000) / 1000)*2;
    luku5 = ((n % 100000) / 10000)*2;
    loppu = (luku1) + (luku2) + (luku3<<1) + (luku4<<2) + (luku5<<3);

    return(loppu);
    }

