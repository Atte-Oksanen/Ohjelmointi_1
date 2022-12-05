    #include <stdio.h>

    void pinKoodi (void);
    int nosto (int saldo2);
    int nostolopetus ();
    int saldopalvelu (int saldo2);
    int lopetusfunktio ();



int main(void) { //pääkäyttöliittymä

    int menu = 0,
        saldo = 1000,
        lopetus = 1;

    pinKoodi();

    while (lopetus != 2) {
        menu = 0;
        printf(" 1:Otto \n 2:Saldo \n 3:Tapahtumat \n 4:Palvelun lopetus \n Valitse haluamasi palvelu >");
        scanf("%d", &menu);

        while (menu < 1 || menu > 4) {
                while (getchar() != '\n') {}
            printf("Virheellinen syote. Anna uusi syote. \n 1:Otto \n 2:Saldo \n 3:Tapahtumat \n 4:Palvelun lopetus \n Valitse haluamasi palvelu >");
            scanf("%d", &menu);
            }

        switch (menu){

            case 1:
                saldo = nosto( saldo );
                lopetus = nostolopetus();
                if(lopetus != 1){
                    break;
                    }


            case 2:
                lopetus = saldopalvelu(saldo);
                if(lopetus != 1){
                break;
                }

            case 3:
                printf("404 - Palvelu saapuu piakkoin :)");
                lopetus = lopetusfunktio();
                break;



            case 4:
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

int nosto (int saldo2){ //otto, nostaa tililtä halutun summan. Saa main-funktiosta saldomuuttujan arvon. Palauttaa päivitetyn arvon saldo-muuttujaan

      int   nosto,
            n=0,
            saldo3;

    printf("Miniminosto 20 euroa \n Maksiminosto 1000 euroa \n syota nostettava summa tasakymmenina > ");
    scanf("%d", &nosto);

    while (nosto < 20 || nosto > 1000 || nosto % 10 != 0 || nosto > saldo2) {
        while (getchar() != '\n') {}
        if(nosto > saldo2){
            printf("Tilin kate ei riita, syota pienempi summa. \n Miniminosto 20 euroa \n Maksiminosto 1000 euroa \n syota nostettava summa tasakymmenina > ");
            }
        else {
            printf("Virheellinen syote. Anna uusi syote. \n Miniminosto 20 euroa \n Maksiminosto 1000 euroa \n syota nostettava summa tasakymmenina >");
            }
        scanf("%d", &nosto);
        }

            saldo3 = saldo2 - nosto; //lasketaan tilille uusi saldo



                printf("%d euroa nostettu", nosto);

    return (saldo3); //palautetaan päivitetty saldo muuttujaan
    }

int nostolopetus () { //nosto-funktion jälkifunktio, määrittelee jatkotoimenpiteet. Palauttaa main-funktioon lopetusfunktiosta saamansa arvon.

    int nostomenu,
    lopetus;

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

int saldopalvelu (int saldo2) { //Tarkistaa käyttäjän saldon ja suorittaa jatkotoimenpiteet. Saa main-funktiosta saldomuuttujan arvon. Palauttaa lopetusfunktiosta saaman arvon main-funktioon.
        int syote,
        lopetus;

        printf("Tilisi saldo on %d euroa \nHaluatko tarkastaa tapahtumat? \n1:Kylla \n2:Ei \n>", saldo2);
        scanf("%d", &syote);

        while (syote != 1 && syote != 2) {
            while (getchar() != '\n') {}
            printf("Virheellinen syote. Anna uusi syote. \nHaluatko tarkastaa tapahtumat? \n1:Kylla \n2:Ei \n>");
            scanf("%d", &syote);
            }

        if(syote == 1){
            return(1);
            }

        else {
            lopetus = lopetusfunktio();
            if(lopetus == 1){
                lopetus = 3;
                }
            return(lopetus);
            }

    }

int lopetusfunktio (){ // Lopettaa ohjelman. Palauttaa kutsuvaan funktioon arvon 1 tai 2.

    int syote;

    printf(" Haluatko lopettaa vai palata alkuun? \n 1:Alkuun \n 2:Lopetus >");
               scanf("%d", &syote);

    while (syote != 1 && syote != 2) {
        while (getchar() != '\n') {}

        printf("Virheellinen syote. Anna uusi syote. \n 1:Alkuun \n 2:Lopetus \n Haluatko lopettaa vai palata alkuun? >");
        scanf("%d", &syote);
        }

    printf("\n\n");
    return(syote);

    }
