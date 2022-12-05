#include <stdio.h>
#include <string.h>

void etsiMerkkijonoAlusta(char input1[] , char input2[] , char palautus[]);


int main(void) {

    char mjono1[100];
    char mjono2[100];
    char loydetty[10]={'\0'};

    printf(">");
    scanf("%s", mjono1);
    printf(">");
    scanf("%s", mjono2);

    etsiMerkkijonoAlusta(mjono1, mjono2, loydetty);
    printf("%s", loydetty);

    return (0);
}

void etsiMerkkijonoAlusta(char input1[] , char input2[] , char palautus[]) {

    int n = 0;

    while(input1[n] == input2[n]){
        palautus[n] = input1[n];
        n++;
    }

}
