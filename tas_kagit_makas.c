#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	
	int tas = 1;
	int kagit = 2;
	int makas = 3;
	int i,secim;
	int bilgisayar,oyuncu = 0,bilgisayar_skor = 0;
	
	for(i=0;i<5;i++){
		printf("seciminizi giriniz:\n");
		scanf("%d",&secim);
		int bilgisayar = rand() % 3 + 1;
		if(secim == 1){
			if(bilgisayar == 1){
				printf("berabere...\n");
			}
			else if(bilgisayar == 2){
				printf("Bilgisayar kazandi...\n");
				bilgisayar_skor += 1;
			}
			else if(bilgisayar == 3){
				printf("oyuncu kazandi...\n");
				oyuncu += 1;
				
			}
		}
		
		
		else if(secim == 2){
			
			 if(bilgisayar == 1){
			 	printf("oyuncu kazandi...\n");
			 	oyuncu += 1;
			 }
			 else if(bilgisayar == 2){
			 	printf("berabere...\n");
			 }
			 else if(bilgisayar == 3){
			 	printf("bilgisayar kazandi...\n");
			 	bilgisayar_skor += 1;
			 }
		}
		
		else if(secim == 3){
			
			if(bilgisayar == 1){
			 	printf("bilgisayar kazandi...\n");
			 	bilgisayar_skor += 1;
			 }
			 else if(bilgisayar == 2){
			 	printf("oyuncu kazandi...\n");
			 	oyuncu += 1;
			 	
			 }
			 else if(bilgisayar == 3){
			 	printf("berabere...\n");
			 
			}
		}
		
		else{
			printf("gecersiz secim...\n");
		}
	}
		

	
	if(bilgisayar_skor > oyuncu){
		
		printf("bilgisayar = %d oyuncu = %d bilgisayar kazandi...\n",bilgisayar_skor,oyuncu);
	}
	else if(oyuncu > bilgisayar_skor){
		
		printf("oyuncu= %d bilgisayar = %d oyuncu kazandi...\n",oyuncu,bilgisayar_skor);
	}
	
	else if(oyuncu == bilgisayar_skor){
		printf("bilgisayar = %d oyuncu = %d dostluk kazandi...",bilgisayar_skor,oyuncu);
	}
	
}
	
	
	
	
	

