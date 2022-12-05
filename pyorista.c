    #include <stdio.h>
    #include <math.h>

    double pyoristus (double luku);

    int main (void) {

    double syote1,
    syote2,
    syote3,
    syote4,
    syote5,
    vastaus1,
    vastaus2,
    vastaus3,
    vastaus4,
    vastaus5;

    printf("syota luku >");
    scanf("%lf", &syote1);
    vastaus1 = pyoristus(syote1);

    printf("syota luku >");
    scanf("%lf", &syote2);
    vastaus2 = pyoristus(syote2);

    printf("syota luku >");
    scanf("%lf", &syote3);
    vastaus3 = pyoristus(syote3);

    printf("syota luku >");
    scanf("%lf", &syote4);
    vastaus4 = pyoristus(syote4);

    printf("syota luku >");
    scanf("%lf", &syote5);
    vastaus5 = pyoristus(syote5);


    printf("%f  %f\n", syote1, vastaus1);
    printf("%f  %f\n", syote2, vastaus2);
    printf("%f  %f\n", syote3, vastaus3);
    printf("%f  %f\n", syote4, vastaus4);
    printf("%f  %f\n", syote5, vastaus5);

    return(0);
    }


    double pyoristus (double luku){

    double result;

    result = floor(luku+ 0.5);


    return(result);
    }
