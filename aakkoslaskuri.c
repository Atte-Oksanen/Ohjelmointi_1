#include <stdio.h>
#include <string.h>

int main (void){

    int n,
    luku = 0;

    char string1[100] = {0},
         string2[100] = {0},
         string3[100] = {0},
         aakkonen = 'a';

    printf(">");
    fgets(string1, 100, stdin);
    fgets(string2, 100, stdin);
    fgets(string3, 100, stdin);

    strcat(string1, string2);
    strcat(string1, string3);

    printf("Aakkonen     Kpl\n");


    while (aakkonen < 'z' + 1){
        while (n < 100){
            if(string1[n] == aakkonen){
                luku++;
            }
    n++;
    }
    printf("%c              %d\n",aakkonen, luku);
    aakkonen++;
    luku = 0;
    n = 0;
    }






}
