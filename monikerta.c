
    #include <stdio.h>

    int main (void) {

        int luku1, luku2;
        double luku3;

        printf("Anna 1. kokonaisluku >");
        scanf("%d", &luku1);
        printf("Anna 2. kokonaisluku >");
        scanf("%d", &luku2);



            if (luku1 == 0 || luku2 == 0) {

                    printf("Luku %d ei ole luvun %d monikerta.", luku1, luku2);
                    return (0);
                    }
        luku3 = luku1 % luku2;
        if (luku3 == 0) {
            printf("Luku %d on luvun %d monikerta.", luku1, luku2);
        }
        else {
            printf("Luku %d ei ole luvun %d monikerta.", luku1, luku2);
        }
    return(0);
    }

