

#include <stdio.h>


    int main(void) {

    int celcius = -100,
    laskuri;

    printf("%7s%12s", "Celsius", "Fahrenheit\n");

    for(laskuri = 0; laskuri < 21; laskuri = laskuri + 1) {
            double fahr= (celcius * 1.8) + 32;
            printf("%7d%12.2f\n", celcius, fahr);
            celcius = celcius + 10;

    }
    return(0);
    }
