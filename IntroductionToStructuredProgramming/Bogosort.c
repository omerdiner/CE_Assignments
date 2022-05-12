#include <stdio.h>
#include <stdlib.h>
#define SIZE 500
int isSorted(int *arr, int n);
void printArray(int *arr,int n);
int bogoSort(int *arr,int n);
int main(){
	srand(time(NULL));//random say�lar d�zg�n �retilsin diye
	int i,n,arr[SIZE];
	
	printf("Array size:");
	scanf("%d",&n);
	
	// kullan�c� u�ra�mas�n diye diziyi 1-1000 aras�nda rastgele elemanlarla doldurur
	for(i=0;i<n;i++){
		arr[i] = rand()%(999) + 1;
	}
	
	printf("Random generated array:\n");
	printArray(arr,n);
	//s�ralama bittikten sonra fonksiyonun toplam ka� kere diziyi kar��t�rmak i�in en i�teki swap i�lemini yapt���n� g�steren say�y� de�i�kenle al�yorum
	
	int complexityCount=bogoSort(arr,n);
	
	printf("\n\nAfter sorted:\n");
	printArray(arr,n);
	printf("\n\nTotal %d swap processes.",complexityCount);
	
	return 0;
}

// dizi s�ral� m� diye bak�yor de�ilse -1 d�nd�r�yor
int isSorted(int *arr, int n){
	//n eleman say�s�n� temsil ediyor ama indisler 0'dan ba�lad��� i�in hata olu�mas�n diye n 1 azal�yor
	n=n-1;
   while ( n >= 1 ) {
      if ( arr[n] < arr[n-1] ){
    	  return -1;
	  }else{
		n--;
	 }
   }
   
    return 1;
}
void printArray(int *arr,int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}

//normalde void olarak i�lem yap�l�rd� ama i�lem say�s�n� maine d�nd�rmek i�in int d�nd�ren bir fonksiyon tan�mlad�m
int bogoSort(int *arr,int n){
	int i, tmp, randomIndex , count=0;
	
	
	while(isSorted(arr,n)==-1){//s�ral� olmad��� s�rece
	      
		  for(i=0; i < n; i++) { //n kere dizinin elemanlar�n� rastgele indisleriyle swap i�lemi yap
		        count++;
                tmp = arr[i];
                randomIndex = rand() % n;
                arr[i] = arr[randomIndex];
                arr[randomIndex] = tmp;
           }
   }
   return count; 
}
