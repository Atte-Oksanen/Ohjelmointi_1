#include <stdio.h>

void syote (int taulukko[]);
void tulostus (int taulukko[]);
int maaritaSuurin (int taulukko[]);
double laskeKeskiarvo (int taulukko[]);

 int main (void){

    int taulukko[10],
    suurin;

    double keskiarvo;

    syote(taulukko);
    tulostus(taulukko);
    suurin = maaritaSuurin(taulukko);
    printf("\nSuurin arvo on %d, ja se sijaitsee paikassa %d", taulukko[suurin], suurin);
    keskiarvo = laskeKeskiarvo(taulukko);
    printf("\nTaulukon arvojen keskiarvo on %.3f", keskiarvo);

}



 void syote (int taulukko[]) {

    int n=0;


    while (n < 10){
        printf("Anna %d. kokonaisluku >", n + 1);
        scanf("%d", &taulukko[n]);

        while(taulukko[n] < 0 || taulukko[n] > 100){
            printf("Anna %d. kokonaisluku >", n + 1);
            scanf("%d", &taulukko[n]);
            }

        n++;
        }
 }


 void tulostus (int taulukko[]) {

    int n=0;

     printf("Taulukon:\n");

     while (n < 10){
            printf("%d  ", taulukko[n]);
            n++;
        }

}



 int maaritaSuurin (int taulukko[]){

    int n = 0,
    y = 0,
    totuus = 0;


     while (n < 10){
        while (y < 10){
            if (y == n){}

            else {
                if(taulukko[n] < taulukko[y]){
                    totuus = 1;
                    break;
                    }
                }
            y++;
            }

        if (totuus == 0){
            return(n);
        }
        totuus = 0;
        y = 0;
        n++;
        }
 }


 double laskeKeskiarvo (int taulukko[]){

    double keskiarvo;
    int summa = 0,
    n = 0;


    while (n < 10) {
        summa = summa + taulukko[n];
        n++;
        }

    keskiarvo = (double)summa / (double)n;

    return(keskiarvo);

 }
