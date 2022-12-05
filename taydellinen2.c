 #include <stdio.h>


    int onkoLukuTaydellinen(int luku);

    int main(void){

    int luku = 1,
    luku2;

    while (luku < 100000){

        luku2 = onkoLukuTaydellinen(luku);
        if (luku2 > 2){
            printf("\nLuku %d on taydellinen luku", luku2);
            }
        luku = luku + 1;
        }



    return(0);
    }




    int onkoLukuTaydellinen(int luku){

    int laskuri = 2,
    liuku=luku,
    summa=0;

     while (liuku > 1 ) {
        liuku = luku;
        liuku = luku / laskuri;
        if (luku % laskuri == 0){
            summa = summa + liuku;
            }

        laskuri = laskuri + 1;
     }
    summa = summa + 1;

    if(summa == luku) {
        return(luku);
        }

    else {
        return(0);
        }



}



