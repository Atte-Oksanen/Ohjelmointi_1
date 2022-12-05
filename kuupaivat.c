#include <stdio.h>

int paivienLukumaaraKuukaudessa (int kk);


 int main (void){

    int tuloste,
    kuukausi;



    printf("Syota kuukauden numero >");
    scanf("%d", &kuukausi);

    tuloste = paivienLukumaaraKuukaudessa(kuukausi);

    if(tuloste == -1){
        printf("Kuukautta %d ei ole olemassa", kuukausi);
    }
    else {
    printf("Kuukaudessa %d on %d paivaa", kuukausi, tuloste);
    }
return(0);
}


 int paivienLukumaaraKuukaudessa (int kk){

    int palautus,
    kuukaudenpaivat [12] = {31,28,31,30,31,30,31,31,30,31,30,31};

    if (kk > 12 || kk < 1){
        return(-1);
        }


    palautus = kuukaudenpaivat[kk-1];

    return(palautus);

    }
