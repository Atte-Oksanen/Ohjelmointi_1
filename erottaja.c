//erottaja.c

 #include <stdio.h>

    int main (void) {

    int luku,
    luku1,
    luku2,
    luku3,
    luku4,
    input;

    printf("syota viisinumeroinen kokonaisluku >");
    scanf("%d",&input);
    luku = input % 10;
    luku1 = (input % 100) / 10;
    luku2 = (input % 1000) / 100;
    luku3 = (input % 10000) / 1000;
    luku4 = (input % 100000) / 10000;
    printf("%d %d %d %d %d", luku4, luku3, luku2, luku1, luku);


    return (0);

    }




