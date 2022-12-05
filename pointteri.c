#include <stdio.h>

    void tee (int n, int * x);

    int main (void) {

    int n,x;

    scanf("%d", &n);

    tee(n, &x);

    printf("%d", x);

}



void tee (int n, int * x){

*x = n * 2;
}
