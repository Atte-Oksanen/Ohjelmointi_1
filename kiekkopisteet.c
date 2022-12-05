#include <stdio.h>
#include <string.h>

typedef struct {

    char nimi[50];
    int voitot,
    haviot,
    suhde;
} Joukkue;

Joukkue syote(void);
Joukkue jarjestaja(Joukkue liiga[], int maara);

int main (void){

    int lukumaara,
    n = 0;

    Joukkue dummy;




    printf("Anna joukkuiden lukumaara >");
    scanf("%d", &lukumaara);

    while (getchar() != '\n') {}

    Joukkue liiga[lukumaara];


    while(n < lukumaara){
    liiga[n] = syote();
    n++;

    }

    jarjestaja(liiga, lukumaara);

    n = 0;

    printf("****************************************\n         TULOSLISTA\n****************************************\n\n");

    while(n < lukumaara){
        dummy = liiga[n];
        printf("%d. joukkue:    %s tilanne: %d voittoa ja %d tappiota\n",n+1, dummy.nimi, dummy.voitot, dummy.haviot);
        n++;
    }





}

Joukkue syote(void){

    Joukkue jengi;
    int n = 0;
    printf("Syota joukkueen nimi >");
    fgets(jengi.nimi, 50, stdin);
    n = strlen(jengi.nimi) - 1;
    jengi.nimi[n] = '\0';


    printf("Syota joukkueen voitot >");
    scanf("%d", &jengi.voitot);
    while (getchar() != '\n') {}

    printf("Syota joukkueen haviot >");
    scanf("%d", &jengi.haviot);
    while (getchar() != '\n') {}

    jengi.suhde = jengi.voitot - jengi.haviot;

    return(jengi);


}


Joukkue jarjestaja(Joukkue liiga[], int maara){

     Joukkue temp1,
     temp2,
     jliiga[maara];

     int  n = 0,
     j = 0,
     z = 0;

    while(n < maara) {
        temp1 = liiga[n];

        while(j < maara){
            temp2 = liiga[j];

            if (temp1.suhde < temp2.suhde){
                z++;
            }
            j++;

        }

        jliiga[z] = temp1;
        z = 0;
        j = 0;
        n++;


    }

    n = 0;

    while(n < maara){
        liiga[n] = jliiga[n];
        n++;
    }
}
