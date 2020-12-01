#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>


int main()
    {
        static const char PSWRD[]="1234";
        char p[6];
        int n=3, y;
            int islem;
    int bakiye =100;
    int tutar;
    
        printf("Welcome");
    
    
        do{
            printf("\n\nStudent_ID:Elif");
            fflush(stdout);
    
            printf("\nPassword:");
            scanf("%s", p);
            fflush(stdout);
    
           
            y=strcmp(p, PSWRD);
    
            if(y==0){
                printf("\nSucessfull Login\n"); //succesfull login
                goto islemler;
            }else{
                n--;
                    printf("\nWrong password, try again: "); //wrong password try again
                    printf("\nRemaining attempts  ");
                    printf("%d\n", n);
                    getchar();
            }
    
            if(n<1){
                printf("\nYour account has been blocked\n"); 
                    return 0;
            }
        }while (n>0);
        islemler:
            printf("Islemler\nPara yatirmak icin 1 \nPara cekmek icin 2\nHesap bakiyenizi gormek icin 3\nCikmak icin 4 girimiz");
    do{

    printf("\n\nIslem Seciniz:");
    scanf("%d",&islem);{

    switch(islem){

    case 1:
        printf("Bakiyeniz %d \n",bakiye);
        printf("\nYatirilacak Tutar:");
        scanf("%d",&tutar);
        bakiye += tutar;
        printf("Bakiyeniz: %d",bakiye);
        break;
        
    case 2:
        printf("Bakiyeniz %d \n",bakiye);
        printf("\nCekilecek Tutar:");
        scanf("%d",&tutar);
        if (tutar > bakiye){
            printf("Bakiye yetersiz\n");
        }
        bakiye -= tutar;
        printf("Bakiyeniz: %d",bakiye);
        break;

    case 3:
        printf("Bakiyeniz: %d",bakiye);
        break;  
        
    case 4:
        printf("Cikis Yapiliyor");
        return 0;
        
    default:
        printf("Hatali Islem");
        return 0;
    }           
    }   } while (islem);
    return 0;
}
