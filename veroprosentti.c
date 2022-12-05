
  #include <stdio.h>

    int main (void) {

        double tuntipalkka,
        tehdyt_tunnit,
        palkka,
        nettopalkka,
        verottajan_prosentti,
        vero,
        omavero,
        verottajan_osuus,
        lisatunnit;


        printf("Tuntipalkka >");
        scanf("%lf" , &tuntipalkka);
        printf("Tehdyt tunnit >");
        scanf("%lf" , &tehdyt_tunnit);
        printf("Veroprosentti >");
        scanf("%lf" , &verottajan_prosentti);

        if (tehdyt_tunnit > 40) {
           double ylitunnit= tehdyt_tunnit -40;
           tehdyt_tunnit= tehdyt_tunnit - ylitunnit;
           double ylipalkka = tuntipalkka *1.5 ;
           double ylityot = ylipalkka * ylitunnit;
           palkka = (tehdyt_tunnit * tuntipalkka) + ylityot;
        }
        else {
            palkka = tuntipalkka * tehdyt_tunnit;
        }

        vero = verottajan_prosentti/100;
        omavero = 1-vero;
        nettopalkka = omavero * palkka;
        verottajan_osuus = vero * palkka;
        printf("\n");
        printf("Nettopalkkasi on %.2f euroa ja verottajan osuus on %.2f euroa" ,nettopalkka ,verottajan_osuus);


        return (0);
    }
