#include <stdio.h>
#include <math.h>


typedef struct {
    int x[10],
    y[10];
} taulukko;


int main (void){

    int n = 0,
    x,
    y,
    tempx = 0,
    tempy = 0;

    double tempyht = 0,
    etaisyys = 0;

    taulukko taulukko = {0};

    while(n < 5){
        scanf("%d", &x);
        scanf("%d", &y);
        taulukko.x[n] = x;
        taulukko.y[n] = y;
        n++;
    }

    n = 0;

    while(n < 4){
        tempx = taulukko.x[n] - taulukko.x[n+1];
        if(tempx < 0){
            tempx = tempx * -1;
        }

        tempy = taulukko.y[n] - taulukko.y[n+1];
        if(tempy < 0){
            tempy = tempy * -1;
        }

        tempyht = sqrt((tempy * tempy) + (tempx * tempx));
        etaisyys = etaisyys + tempyht;
        n++;

    }
    printf("Etaisyys mutkitellen on %.3f\n", etaisyys);

    tempx = taulukko.x[0] - taulukko.x[4];
    if (tempx < 0){
        tempx = tempx * -1;
    }

    tempy = taulukko.y[0] - taulukko.y[4];
    if (tempy < 0){
        tempy = tempy * -1;
    }

    tempyht = sqrt((tempy * tempy) + (tempx * tempx));

    printf("Alku ja loppupisteiden valinen etaisyys on %.3f", tempyht);






    }


