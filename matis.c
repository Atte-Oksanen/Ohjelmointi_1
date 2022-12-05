#include <stdio.h>


int main (void){

int PIN;



printf("\nTervetuloa! Tunnuslukusi on 0000 , ole hyva!");

    printf("\n\nSyota tunnusluku lopuksi paina enter ");
    scanf("%d", &PIN);

        while ( PIN != 0000) {
            while (getchar()!='\n'){}
            printf("\nVaara tunnusluku, yrita uudelleen ");
            scanf("%d", &PIN);

        }


        }
