

 #include <stdio.h>

    int main (void) {

    int pisteet, arvosana;

    printf("syota pisteesi >");
    scanf("%d", &pisteet);






        switch (pisteet) {

        case 0 ... 11:
            arvosana = 0;
            break;

        case 12 ... 13:
            arvosana = 1;
             printf("Arvosanasi on %d", arvosana);
            break;

        case 14 ... 16:
            arvosana = 2;
             printf("Arvosanasi on %d", arvosana);
            break;

        case 17 ... 19:
            arvosana = 3;
             printf("Arvosanasi on %d", arvosana);
            break;

        case 20 ... 22:
            arvosana = 4;
             printf("Arvosanasi on %d", arvosana);
            break;

        case 23 ... 24:
            arvosana = 5;
             printf("Arvosanasi on %d", arvosana);
            break;

        default:
            printf("Virheellinen pistemaara");
        }

        if (arvosana == 0) {
            printf("Hylatty");
        }

    return(0);
    }
