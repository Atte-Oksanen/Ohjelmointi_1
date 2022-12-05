    #include <stdio.h>


    void pinKoodi (void);
    int nosto ();
    int saldopalvelu ();
    int lopetusfunktio ();



    int main(void) { //pääkäyttöliittymä

    int menu = 0,
        saldo = 1000,
        lopetus = 1;

    pinKoodi();

    while (lopetus != 2) {
        menu = 0;
        printf(" 1:Otto \n 2:Saldo \n 3:Palvelun lopetus \n Valitse haluamasi palvelu >");
        scanf("%d", &menu);

        while (menu < 1 || menu > 3) {
            while (getchar() != '\n') {}
            printf("Virheellinen syote. Anna uusi syote. \n 1:Otto \n 2:Saldo \n 3:Tapahtumat \n 4:Puheaika \n 5:Palvelun lopetus \n Valitse haluamasi palvelu >");
            scanf("%d", &menu);
            }

        switch (menu){

            case 1:
                lopetus = nosto();
                if(lopetus != 1){
                    break;
                    }


            case 2:
                lopetus = saldopalvelu(saldo);
                if(lopetus != 1){
                break;
                }


            case 3:
                lopetus = lopetusfunktio();
                break;

            }
    }

    printf("\n\n\nKiitos kaynnista ja tervetuloa uudelleen! \n");
    return(0);
    }


    void pinKoodi (void) { //kysyy käyttäjältä pin-koodin. Ei päästä pääkäyttöliittymään ennen kuin pin-koodi oikein.

        int pin = 1234,
        syote;

        printf("Hint: Pin-koodi on 1234\n\n");

        printf("Syota pankkikortti. Paina Enter jatkaaksesi >");
        while( getchar() != '\n' ){}

        printf("Syota pin-koodi >");
        scanf("%d", &syote);

         while (syote != pin) {
            while (getchar() != '\n') {}
            printf("Virheellinen pin-koodi.\nSyota pin-koodi >");
            scanf("%d", &syote);
            }

        printf("Pin-koodi oikein!\n\n\n");





    }

    int nosto () { //otto, nostaa tililtä halutun summan. Palauttaa lopetusfunktiosta saaman arvon main-funktioon.

    int nostomenu,
    lopetus,
    nosto;

    printf("Syota nostettava summa tasakymmenina >");
    scanf("%d", &nosto);

    while (nosto % 10 != 0) {
        while (getchar() != '\n') {}
        printf("Virheellinen syote. Anna uusi syote. \nSyota nostettava summa tasakymmenina >");
        scanf("%d", &nosto);
        }

    printf("Tililta nostettu %d euroa", nosto);

    printf("\n Haluatko tarkistaa saldon? \n1: kylla \n 2: ei \n>");
    scanf("%d", &nostomenu);

    while (nostomenu != 1 && nostomenu != 2) {
        while (getchar() != '\n') {}
        printf("Virheellinen syote. Anna uusi syote. \nHaluatko tarkistaa saldon? \n 1:Kylla \n2:Ei \n>");
        scanf("%d", &nostomenu);
        }

    if (nostomenu == 1) {
        return(1);
        }

    else {
        lopetus = lopetusfunktio();
        if (lopetus == 1){
            lopetus = 3;
        }

        return(lopetus);
        }

    }

    int saldopalvelu () { //Tarkistaa käyttäjän saldon ja suorittaa jatkotoimenpiteet. Palauttaa lopetusfunktiosta saaman arvon main-funktioon.
        int syote,
        lopetus;

        printf("Tilisi saldo on ### euroa");

        lopetus = lopetusfunktio();

        if(lopetus == 1){
            lopetus = 3;
            }

        return(lopetus);

    }

    int lopetusfunktio (){ // Lopettaa ohjelman. Palauttaa arvon 1 tai 2 kutsuvaan funktioon.

        int syote;

        printf(" Haluatko lopettaa vai palata alkuun? \n 1:Alkuun \n 2:Lopetus >");
        scanf("%d", &syote);

        while (syote != 1 && syote != 2) {
            while (getchar() != '\n') {}
                printf("Virheellinen syote. Anna uusi syote. \n 1:Alkuun \n 2:Lopetus \n Haluatko lopettaa vai palata alkuun? >");
                scanf("%d", &syote);
        }
        printf("\n\n\n");
        return(syote);
    }


