#include <stdio.h>
#include <string.h>

int omaStrcmp(char input1[], char input2[]);


int main () {

    char str1[20] = {'\0'},
    str2[20] = {'\0'};

    int totuus = 0,
    pituus = 0;

    fgets(str1, 20, stdin);
    fgets(str2, 20, stdin);

    pituus = strlen(str1);
    str1[pituus - 1] = '\0';

    pituus = strlen(str2);
    str2[pituus - 1] = '\0';

    totuus = omaStrcmp(str1, str2);

    if(totuus == 1){
        printf("%s < %s", str1, str2);
   }

    if(totuus == 2){
        printf("%s > %s", str1, str2);
   }

    if(totuus == 0){
        printf("%s == %s", str1, str2);
   }



}


int omaStrcmp(char input1[], char input2[]){

    int n = 0;


    while(n < 20){
         if(input1[n] < input2[n]){
            return(1);
         }
        if(input1[n] > input2[n]){
            return(2);
        }
        n++;
    }

    return(0);
}

