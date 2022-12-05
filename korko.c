
    /*korko.c
    Ohjelma laskee k‰ytt‰j‰n antamasta lainasummasta kokonaiskoron m‰‰r‰n halutulta aikajaksolta.
    */

    #include <stdio.h>

    int main(void) {

        double laina,   /* M‰‰ritell‰‰n vaadittavat muuttujat */
        korko,
        korkoprosentti,
        lainapaiva,
        lainavuosi,
        kokonaiskorko;

        printf("Nostettu laina >"); /* Kysyt‰‰n k‰ytt‰j‰lt‰ vaadittavat tiedot */
        scanf("%lf" , &laina);

        printf("Korkoprosentti >");
        scanf("%lf", &korko);

        printf("lainapaivat >");
        scanf("%lf", &lainapaiva);

        korkoprosentti = korko/100; /* Lasketaan korkoprosentti, lainap‰iv‰t muutetaan lainavuosiksi sek‰ lasketaan kokonaiskorko */
        lainavuosi = lainapaiva/365;
        kokonaiskorko = laina * korkoprosentti *lainavuosi;


        printf("Lainapaaoman %.2lf euroa korko %.0lf paivalta korkoprosentilla %.2lf on yhteensa %.2lf euroa.", laina, lainapaiva, korko, kokonaiskorko);

        return(0);

    }
