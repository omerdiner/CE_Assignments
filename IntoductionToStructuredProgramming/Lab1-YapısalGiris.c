#include <stdio.h>
#define SIZE 500
int main(){
	
	int n,alinanDizi[SIZE],kontrolDizi[SIZE];	
    int i;
    int adet=0;
    
    printf("Kac elemanli bir dizi gireceksiniz:");
    scanf("%d",&n);
    
    //kontrol dizisini kullan�rken s�k�nt� olmas�n diye en ba�ta degerlerini s�f�rlad�m
	for(i=0;i<n;i++){
		kontrolDizi[i]=0;
	}
	
	
	// 0.indis bo� kalmas�n diye diziyi 0'dan ba�layarak yerle�tirdim
	for(i=0;i<n;i++){
		printf("%d. elemani giriniz:",i+1);
		scanf("%d",&alinanDizi[i]);
		
		if(alinanDizi[i]<=n){
			kontrolDizi[alinanDizi[i]-1]++;
		}
	}
	
	printf("\n");
	
	// dongu s�f�rda ba�lad��� i�in i+1. say� kontrolDizi[i] ye e�it mi diye bak�yoruz
	for(i=0;i<n;i++){
		if(i+1==kontrolDizi[i]){
			printf("%d ",i+1);
			adet++;
		}
	}
	
	//sihirli say� yoksa kullan�c�ya belirtir
	if(adet==0){
		printf("Bu dizide hic sihirli sayi yok.");
	}
	
	return 0;   
	
}
