 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>

 int main (void) {

    int a,
    kello=0,
    kruuna=0,
    klaava=0;

    srand(time(NULL));

    while (kello < 100){
        a = rand();
        /*    if (a == 1){
                kruuna = kruuna + 1;
                }

            else {
                klaava = klaava + 1;
                }*/
        kello = kello + 1;
        printf("\n%d", a);
    }

   // printf("Heittojen tulos: %d kruunua ja %d klaavaa", kruuna, klaava);
}
