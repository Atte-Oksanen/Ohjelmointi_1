int onkoLukuTaydellinen(int luku, int n);
int marsennenlaskin (int n);

int main(void){

    int luku=1,
    n=2,
    luku2;


    while (n < 10){
        printf("\n%d", n);
            while (luku < 10000) {

                luku2 = onkoLukuTaydellinen(luku, n);



                if(luku2 > 1){
                printf("\nLuku %d on taydellinen luku", luku2);

                }

                luku=luku + 1;
             }

    switch (n) {
    case 2:
        n = n + 1;
        break;

    case 3:
        n = n + 2;
        break;

    case 5:
        n = n + 2;
        break;

    case 7:
        n = n +3;
        break;
    }

    }

    return(0);
    }






int onkoLukuTaydellinen(int luku,int n){

    int
    vastaus1,
    y=1;



    vastaus1 = marsennenlaskin(n);
    if (luku == vastaus1){
        return(vastaus1);
        }

    else {
        return(0);
    }



  }





    int marsennenlaskin(int n) {

     int
        luku1=2,
        luku2=2,
        vastaus,
        liuku=luku1,
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

    return(vastaus);
}
