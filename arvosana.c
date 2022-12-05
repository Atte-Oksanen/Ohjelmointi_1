

 #include <stdio.h>

    int main (void) {

    int pisteet, arvosana;

    printf("syota pisteesi >");
    scanf("%d", &pisteet);

        if (pisteet < 0 || pisteet > 24) {
            printf("Virheellinen pistemaara");
        }

        if (pisteet < 14) {
            printf("Arvosanasi on 1");
            return(0);
        }

        if (pisteet > 13 && pisteet < 17){
            printf("Arvosanasi on 2");
            return(0);
        }

        if (pisteet > 16 && pisteet <= 19){
            printf("Arvosanasi on 3");
            return(0);
        }

        if (pisteet > 19 && pisteet <= 22){
            printf("Arvosanasi on 4");
            return(0);
        }

        if (pisteet > 22) {
            printf("Arvosanasi on 5");
        }
    return(0);
    }
