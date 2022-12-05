 #include <stdio.h>

 int main (void) {
  int luku1=2,
  luku2=2,
  vastaus,
  liuku=luku1,
  n=5,
  y=1;

   while (y < n-1) {
          luku1 = luku1 * liuku;
          y= y + 1;
          }
    y = 1;

    while (y < n) {
          luku2 = luku2 * liuku;
          y= y + 1;
          }

    vastaus = luku1 * (luku2-1);


printf("%d  %d  %d", luku1, luku2, vastaus);



return(0);
}
