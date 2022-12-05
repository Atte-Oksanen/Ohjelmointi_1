#include <stdio.h>
#include <time.h>
#include <unistd.h>

enum {SECS_TO_SLEEP = 0, NSEC_TO_SLEEP = 100000000};

int main(void) {

    struct timespec remaining, request = {SECS_TO_SLEEP, NSEC_TO_SLEEP};

    int n = 0,
    y = 0,
    x = 0,
    menu = 0,
    print = 0,
    salaus[1000];
    char viesti [1000],
    viestikopio [1000];

    srand(time(NULL));

    printf("Syota salattava viesti:");
    gets(viesti);

    while (viesti[n] != '\0'){
        viestikopio[n] = viesti[n];
        n++;
    }

    printf(".");
    sleep(1);
    printf(".");
    sleep(1);
    printf(".\n");
    sleep(1);
    while (n > 0){
        salaus[y] = 33 + rand() % 25;
        viesti[y] = viesti[y] + salaus[y];
        if(n != 1){
            puts(viesti);
        }
        n--;
        y++;
        nanosleep(&request, &remaining);
    }
    printf("\n\nSalattu viesti on: \n%s\nSalausavain:\n", viesti);
    while(print < y){
        printf("%d", salaus[print]);
        print++;
    }
    printf("\nHaluatko purkaa viestin?\n1: Kylla\n2: Ei\n");
    scanf("%d", &menu);

    if(menu == 1){
        printf(".");
        sleep(1);
        printf(".");
        sleep(1);
        printf(".\n");
        sleep(1);

        while(x < y){
        viesti[x] = viesti[x] - salaus[x];
        if(n != 1){
            puts(viesti);
        }
        x++;
        nanosleep(&request, &remaining);
        }
        printf("\n\npurettu viesti on:\n%s", viesti);
        while(getchar() != '\n'){}
        getchar();
    }
}
