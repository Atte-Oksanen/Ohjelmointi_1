
    #include<stdio.h>
    int main(void){

        int n,
        vali=0,
        lask= 0;

        printf("\nAnna viisilukuinen positiivinen kokonaisluku >");
        scanf("%d",&n);

        vali=n;

        if(n>1 && n>9999) {
            while(n!=0){
            lask = lask * 10 + n%10;
            n = n/10;
            }

        if(vali==lask)
            printf("Luku %d on palindromi", vali);

        else
            printf("Luku %d ei ole palindromi", vali);
            }

        else
            printf("Syote ei ole viisinumeroinen positiivinen kokonaisluku");

        return (0);
        }
