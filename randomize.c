#include <stdio.h>
#include <stdlib.h>

int main (void){

int a,
b,
c,
d,
e;

srand(time(NULL));

    for(d=0; d < 1000; d++){
    a = rand();
    b = rand();
    c = a * b;
    printf("%d\n",c);
    }

return(0);
}
