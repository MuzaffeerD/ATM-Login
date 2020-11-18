#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    static const char PSWRD[]="1234";
    char p[6];
    int n=3, y;

    printf("Hos geldiniz");


    do{
        printf("\n\nOgrenci_ID:Elif");
        fflush(stdout);

        printf("\nSifre:");
        scanf("%s", &p);
        fflush(stdout);

       
        y=strcmp(p, PSWRD);

        if(y==0){
            printf("\nGiris Basarili");
            return 0;
        }else {
            printf("Yanlis Sifre, tekrar deneyiniz", 3-n);
            printf("\nKalan hakkiniz ");
            printf("%d\n", n);
            getchar();
            n--;}

        if(n<0){
            printf("\nHesabiniz bloke oldu");
        }

    }while (n<=3);
	return 0;
}
