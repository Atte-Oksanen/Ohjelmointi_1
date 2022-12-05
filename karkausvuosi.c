#include <stdio.h>

    int karkausvuosi (int vuosi);

    int main (void){

    int syote,
    vastaus;

    printf("Syota vuosiluku >");
    scanf("%d", &syote);

    vastaus = karkausvuosi(syote);

    if(vastaus == 1){
        printf("Vuosi %d on karkausvuosi", syote);
    }
    else {
        printf("Vuosi %d ei ole karkausvuosi", syote);
    }

    return(0);
    }

    int karkausvuosi (int vuosi){

    if(vuosi % 100 == 0){
        if(vuosi % 400 == 0){
            return(1);
            }
        else {
            return(2);
            }
            }


    if(vuosi % 4 == 0) {
        return(1);
        }
    else {
        return(2);
        }

    }


