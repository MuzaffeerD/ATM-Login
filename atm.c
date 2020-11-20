#include<stdio.h>

int main(){
	int islem;
	int bakiye =100;
	int tutar;
	
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
	}	} while (islem);
	return 0;
}
