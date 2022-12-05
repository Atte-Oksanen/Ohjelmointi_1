#include <stdio.h>

 int main (void){

    int syote,
    n,
    y = 0,
    totuus = 0,
    taulukko [20];

    while (n < 20){
        printf("Syota %d. luku >", n + 1);
        scanf("%d", &syote);

        while (syote < 10 || syote > 100){
            while(getchar() != '\n') {}
            printf("Ei kelpaa! \nYrita uudelleen >");
            scanf("%d", &syote);
            }

        taulukko [n] = syote;
        n++;
    }

    n = 0;



    while (n < 20){
        while (y < 20){
            if (y == n){}

            else {
                if(taulukko[n] == taulukko[y]){
                    totuus = 1;
                    break;
                }
                }
            y++;
            }

        if (totuus != 1){
            printf("%d\n", taulukko[n]);
            }
        else {
            totuus = 0;
        }

        y = 0;
        n++;
        }


    return(0);
 }
