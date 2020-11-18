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
                return 0;
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
}
