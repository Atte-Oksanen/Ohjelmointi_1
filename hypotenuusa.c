#include <stdio.h>
#include <math.h>

double laskeHypotenuusa(double sivu0, double sivu01);

int main(void) {

    double sivu1 = 0.0;
    double sivu2 = 0.0;
    double hypotenuusa = 0.0;

    printf("\nAnna ensimmäinen sivu: ");
    scanf("%lf", &sivu1);

    printf("\nAnna toinen sivu: ");
    scanf("%lf", &sivu2);

    hypotenuusa = laskeHypotenuusa(sivu1, sivu2);
    printf("%f", hypotenuusa);

    return 0;
}


    double laskeHypotenuusa(double sivu0, double sivu01) {

    double vastaus;

    vastaus = sqrt((sivu0*sivu0)+(sivu01*sivu01));

    return(vastaus);
    }
