 #include <stdio.h>

    double laskeParkkiMaksu (double aika2);
    double parkkipitka (double pitkaa);

    int main (void) {

    int asiakas=1;

    double aika,
    aika1,
    aika2,
    aika3,
    hinta1,
    hinta2,
    hinta3,
    yhteisa,
    yhteish;

   while (asiakas < 4) {
        printf("Syota tunnit >");
        scanf("%lf", &aika);

        switch (asiakas){
        case 1:
             aika1 = aika;
             hinta1 = laskeParkkiMaksu(aika);
             asiakas = asiakas +1;
             break;

        case 2:
            aika2 = aika;
            hinta2 = laskeParkkiMaksu(aika);
            asiakas = asiakas + 1;
            break;

        case 3:
            aika3 = aika;
            hinta3 = laskeParkkiMaksu(aika);
            asiakas = asiakas + 1;
            break;
        }
        }
    yhteish = hinta1 + hinta2 + hinta3;
    yhteisa = aika1 + aika2 + aika3;

    printf("\n%-7s%-7s%-7s","Asiakas", "Tunnit", "Veloitus");
    printf("\n%-7s%-7.2f%-7.2f","1", aika1, hinta1);
    printf("\n%-7s%-7.2f%-7.2f","2", aika2, hinta2);
    printf("\n%-7s%-7.2f%-7.2f","3", aika3, hinta3);
    printf("\n%-7s%-7.2f%-7.2f","YHTEENSA", yhteisa, yhteish);

    return(0);
    }




    double laskeParkkiMaksu(double aika2) {
    double tulos=0,
    tulosp=0;
    int muuttuja;

    if (aika2 >= 24){
        muuttuja = (int)aika2 / 24;
        tulos = muuttuja * 10;
        aika2 = aika2 - (muuttuja * 24);
        tulos = tulos + (aika2 * 2.5);
        }

    else {
        tulos = parkkipitka (aika2) + 2;
    }

    return(tulos);
    }


    double parkkipitka (double pitkaa) {

    double tulospitka,
    ylijaama;

    if (pitkaa > 3) {
        tulospitka = (pitkaa - 3)/2;
        }



    return(tulospitka);

    }
