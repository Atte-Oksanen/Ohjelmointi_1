#include <stdio.h>
#include <string.h>

char* mystrcpy(char* kohde, const char* lahde);
char* mystrcat(char* kohde, char* lahde);


int main (void) {

    char jono1[20] = "testi",
    jono2[20] = "testi2||";


    mystrcat(jono2, jono1);

    printf("%s", jono2);

}


char* mystrcpy(char* kohde, const char* lahde){

    int n = 0;

    while(lahde[n] != '\0'){
        kohde[n] = lahde[n];
        n++;
    }

    return(kohde);

}

char* mystrcat(char* kohde, char* lahde){

int n = 0,
i = 0;

    while(kohde[n] != '\0'){
        n++;
    }



    while(lahde[i] != '\0'){
        kohde[n] = lahde[i];
        n++;
        i++;
    }
    kohde[n+1] = '\0';
    return(kohde);

}
