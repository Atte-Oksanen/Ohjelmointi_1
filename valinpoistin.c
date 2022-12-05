#include <stdio.h>
#include <string.h>


void poistaValilyonnit (char input[], char output[]);

int main (void){


    char syote1[100],
    syote2[100],
    syote3[100],
    siivottu1[100],
    siivottu2[100],
    siivottu3[100];

    fgets(syote1, 100, stdin);
    fgets(syote2, 100, stdin);
    fgets(syote3, 100, stdin);

    poistaValilyonnit (syote1, siivottu1);
    poistaValilyonnit (syote2, siivottu2);
    poistaValilyonnit (syote3, siivottu3);

    puts(siivottu1);
    puts(siivottu2);
    puts(siivottu3);


    return;
}


void poistaValilyonnit (char input[], char output[]){

    int n = 0,
    y = 0,
    x = 0;


    while(n < 100){
        if(input[n] != ' '){
            output[y] = input[n];
            y++;
        }
        n++;
    }


}


