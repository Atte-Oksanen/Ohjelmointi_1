    #include <stdio.h>

    void pinKoodi (void);
    int nosto (int saldo2);
    int nostolopetus ();
    int saldopalvelu (int saldo2);
    int lopetusfunktio ();




int main(void) { //pääkäyttöliittymä

    int menu = 0,
        saldo = 1000,
        lopetus = 1,
        n = 0,
        tapahtumat[10] = {0};

    pinKoodi();

    while (lopetus != 2) {
        menu = 0;
        printf(" 1:Otto \n 2:Saldo \n 3:Tapahtumat \n 4:Puheaika \n 5:Palvelun lopetus \n Valitse haluamasi palvelu >");
        scanf("%d", &menu);

        while (menu < 1 || menu > 5) {
                while (getchar() != '\n') {}
            printf("Virheellinen syote. Anna uusi syote. \n 1:Otto \n 2:Saldo \n 3:Tapahtumat \n 4:Puheaika \n 5:Palvelun lopetus \n Valitse haluamasi palvelu >");
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
                lopetus = lopetusfunktio();
                break;


            case 5:
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


int nosto (int saldo2){ //otto, käyttäjä syöttää haluamansa summan, ja ohjelma laskee kuinka monta mitäkin seteliä tarvitaan.

      int   nosto,
            nosto2,
            setelit20,
            setelit50,
            n=0,
            saldo3;

    printf("Miniminosto 20 euroa \n Maksiminosto 1000 euroa \n syota nostettava summa tasakymmenina > ");
    scanf("%d", &nosto);

    while (nosto == 30 || nosto < 20 || nosto > 1000 || nosto % 10 != 0 || nosto > saldo2) {
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


            nosto2 = nosto % 50; //lasketaan kuinka monta 20 ja 50 euron seteliä nostetaan.

            if ((nosto2 % 20) != 0) {
                do {
                    nosto2 = nosto2 + 10;
                    n = nosto2 % 20;
                    } while (n != 0);

                }

                setelit50 = (nosto - nosto2) / 50;
                setelit20 =(nosto - (setelit50 * 50)) / 20;
                printf("automaatti antaa %d kappaletta 50 euron seteleita ja %d kappaletta 20 euron seteleita", setelit50, setelit20);

    return (saldo3); //palautetaan päivitetty saldo muuttujaan
    }

int nostolopetus () { //Otto-funktion jälkifunktio, määrittelee jatkotoimenpiteet.

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

int saldopalvelu (int saldo2) { //Tarkistaa käyttäjän saldon ja suorittaa jatkotoimenpiteet.
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



int lopetusfunktio (){ // Lopettaa ohjelman

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






