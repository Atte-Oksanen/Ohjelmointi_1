#include <stdio.h>

int main (void){
  int koodi;
  char merkki;


  scanf("%c", merkki);
  koodi = (int) merkki;
  printf("\nMerkin \'%c\' koodi on %d\n", merkki, koodi);

 return(0);
}
