#include <stdio.h>
#include <math.h>

double pyoristaKokonaisluvuksi(double luku);
double pyoristaKymmenesosat(double luku);
double pyoristaSadasosat(double luku);
double pyoristaTuhannesosat(double luku);


int main (void){

 double luku1 = 0,
 luku2 = 0,
 luku3 = 0,
 luku4 = 0,
 luku5 = 0;

 scanf("%lf", &luku1);
 scanf("%lf", &luku2);
 scanf("%lf", &luku3);
 scanf("%lf", &luku4);
 scanf("%lf", &luku5);

 pyoristaKokonaisluvuksi(luku1);
 pyoristaKymmenesosat(luku1);
 pyoristaSadasosat(luku1);
 pyoristaTuhannesosat(luku1);

 pyoristaKokonaisluvuksi(luku2);
 pyoristaKymmenesosat(luku2);
 pyoristaSadasosat(luku2);
 pyoristaTuhannesosat(luku2);

 pyoristaKokonaisluvuksi(luku3);
 pyoristaKymmenesosat(luku3);
 pyoristaSadasosat(luku3);
 pyoristaTuhannesosat(luku3);

 pyoristaKokonaisluvuksi(luku4);
 pyoristaKymmenesosat(luku4);
 pyoristaSadasosat(luku4);
 pyoristaTuhannesosat(luku4);

 pyoristaKokonaisluvuksi(luku5);
 pyoristaKymmenesosat(luku5);
 pyoristaSadasosat(luku5);
 pyoristaTuhannesosat(luku5);


}


double pyoristaKokonaisluvuksi(double luku) {

    double pyoristys;

    pyoristys = floor(luku + 0.5);
    printf("%f %.0f\n", luku, pyoristys);
}

double pyoristaKymmenesosat(double luku) {

    double pyoristys;

    pyoristys = floor(luku * 10 + 0.5) / 10;
    printf("%f %.1f\n", luku, pyoristys);

}

double pyoristaSadasosat(double luku) {

    double pyoristys;

    pyoristys = floor(luku * 100 + 0.5) / 100;
    printf("%f %.2f\n", luku, pyoristys);

}

double pyoristaTuhannesosat(double luku) {

    double pyoristys;

    pyoristys = floor(luku * 1000 + 0.5) / 1000;
    printf("%f %.3f\n", luku, pyoristys);

}
