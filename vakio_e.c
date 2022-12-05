#include <stdio.h>



int main (void){

    int n = 0,
    y = 0,
    jakaja = 1;

    double luku = 0;

    while (n < 10) {
        while (y < n) {
            jakaja = jakaja * (y + 1);
            y++;
        }
        n++;
        y = 0;

        luku = luku + (1 / (double)jakaja);
        jakaja = 1;
        printf("%f\n", luku);
    }

    return(0);

}
