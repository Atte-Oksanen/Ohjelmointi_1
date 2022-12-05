#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void kertotarkistin(void);
void jakotarkistin(void);
    int main (void){

    int kertoma,
    kerrottava,
    tulos,
    syote,
    valinta;

    srand(time(NULL));

    while(1) {
    valinta = rand() % 2;

    if (valinta == 0){
        kertotarkistin();
        }

    else {
        jakotarkistin();
        }

}









    return(0);

}



    void kertotarkistin (void){

    int vastaus,
    kertoma,
    kerrottava,
    syote;

    do {
            kertoma = rand() % 10;
            kerrottava = rand() % 10;
            } while (kertoma < 1 || kerrottava < 1);


        printf("Anna luku -1 lopettaaksesi\nPaljonko on %d kertaa %d? ", kertoma, kerrottava);

         vastaus = kertoma * kerrottava;

        scanf("%d", &syote);

        if(syote == -1){
                return(0);
                }

        while (vastaus != syote){
            printf("Vaarin, yrita uudelleen >");
            scanf("%d", &syote);
            }

        printf("Oikein!\n");



    return(0);
    }



    void jakotarkistin (void) {

    int vastaus,
    jakaja,
    jaettava,
    syote;

    do {
            jakaja = rand() % 10;
            jaettava = rand() % 10;
            } while (jakaja < 1 || jaettava < jakaja);

        vastaus = jaettava * jakaja;

        printf("Anna luku -1 lopettaaksesi\nPaljonko on %d jaettuna %d? ", vastaus, jakaja);



        scanf("%d", &syote);

        if(syote == -1){
                return(0);
                }

        while (jaettava != syote){
            printf("Vaarin, yrita uudelleen >");
            scanf("%d", &syote);
            }

        printf("Oikein!\n");



    return(0);



    }
