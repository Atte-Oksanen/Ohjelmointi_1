#include <stdio.h>

int main(void){

    int laskuri,
    a = 1,
    b = a * 10,
    c = a * 100,
    d = a * 1000;

    printf("\n%-7s%-7s%-7s%-7s","N", "10*N", "100*N", "1000*N");
    printf("\n");

    for(laskuri = 1; laskuri < 11; laskuri = laskuri + 1){
        printf("\n%-7d%-7d%-7d%-7d",a,b,c,d);
        printf("\n");
        a = a + 1;
        b = b + 10;
        c = c + 100;
        d = d + 1000;
        }
    return(0);
}



/*for(laskuri = 1; laskuri < 11; laskuri=laskuri + 1) {


}
*/
