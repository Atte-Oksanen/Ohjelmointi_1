
#include <stdio.h>


    int main (void){

        int taulukko[2][10] = {0},
        n = 0,
        y = 0,
        x = 0,
        syote = 0,
        lopetus = 0;




    while (lopetus != -1){

        printf("Syota 1-5 >");
        scanf("%d", &syote);

        switch (syote){

        case 1:
            printf("syota luku >");
            scanf("%d", &syote);
            while(taulukko[0][n] != 0){
                n++;
            }
            taulukko[0][n] = 1;
            taulukko[1][n] = syote;

            syote = 0;
            break;

        case 2:
            printf("syota luku >");
            scanf("%d", &syote);
            while(taulukko[0][n] != 0){
                n++;
            }
            taulukko[0][n] = 2;
            taulukko[1][n] = syote;

            syote = 0;
            break;

        case 3:
            printf("syota luku >");
            scanf("%d", &syote);
            while(taulukko[0][n] != 0){
                n++;
            }
            taulukko[0][n] = 3;
            taulukko[1][n] = syote;

            syote = 0;
            break;

        case 4:
            printf("syota luku >");
            scanf("%d", &syote);
            taulukko[0][n] = 4;
            taulukko[1][n] = syote;
            n++;
            syote = 0;
            break;

        case 5:
            printf("syota luku >");
            scanf("%d", &syote);
            taulukko[0][n] = 5;
            taulukko[1][n] = syote;
            n++;
            syote = 0;
            break;




        }
        printf("lopetus?");
        scanf("%d", &lopetus);
        }




        while(y <= n){
            while(x < 1){
                switch(taulukko[0][y]){

                case 1:
                    printf("Nosto    %d", taulukko[1][y]);
                    break;

                case 2:
                    printf("Saldo    %d", taulukko[1][y]);
                    break;

                case 3:
                    printf("Puheaika    %d", taulukko[1][y]);
                    break;

                }
                x++;
            }
        printf("\n");
        x = 0;
        y++;
        }







    }
