
    #include <stdio.h>

    int main (void) {

        int i=0,
        j=0;


        for (i=0; i<8; i++){

            for (j=0; j<9; j++) {
                if (j<=8-i-1) {
                printf(" ");
                }
                else {
                printf("a");
                }
            }
        printf("\n");
        }
    return(0);
    }
