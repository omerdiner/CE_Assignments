#include<stdio.h>
#include<stdlib.h>
#define DEFAULTSIZE 10


/*
Bu dosyada buble sort algoritmas�n�n implemantasyonu bulunmaktad�r. algoritmada kullan�lan fonksiyonlar a��klamalar� ile verilmi�tir. Burada g�sterilen fonksiyon a��klamalar�n� �devlerde olu�turdu�unuz
kodlarda da ayn� �ekilde kullanmal�s�n�z. Problem �ok basit oldu�u i�in kod sat�rlar�nda bulunan yorumlar size basit yada gereksiz gelebilir ve �o�unlu�u zaten bariz olan komutlar� a��klamakta.
Ancak burada dikkat edilmesi gereken noktalar:
	1- fonksiyon �a�r�lar�: fonksiyonlar�n ne yapt�klar�n� a��klasan�zda algoritma i�erisinde �a��rd���n�z fonksiyonlar i�in k���k a��klamalar, ne yapt�klar� sonucunda ne olaca�� gibi, yazarsan�z kodunuzun
	okununurlu�u b�y�k �l��de artacakt�r.
	2- if, switch case gibi komutlarda ko�ulunuzun ne oldu�unu ve hangi durumlarda true hangi durumlarda false olaca��n� yazman�z da algoritman�z�n okununurlu�unu artt�racakt�r.
	3- for, while gibi d�ng�lerde ��kma ko�ulunuz yada d�ng�de yap�lan i�lerin ne oldu�unuz yazaman�z da yararl� olacakt�r.
	
Yorumlar�n�z �ok uzun olmamal�d�r. �zellikle fonksiyon ba��nda yazd���n�z fonksiyon tan�m� k�sm�(@brief) en fazla 2-3 c�mle olmal�d�r. E�er �ok �nemli bir fonksiyonsa yada fonksiyon i�erisinde 
�ok fazla i�lem yap�l�yorsa daha uzun olabilir ancak bu gibi durumlarda ya fonksiyondan raporda veya video da bahsedilmeli yada fonksiyon daha k���k par�alara ayr��t�r�lmal�d�r(�dev kapsamlar� k���k
oldu�u i�in e�er fonksiyonunuz �ok b�y�kse muhtemelen k���k par�alara ay�rmak size daha iyi bir kod sunacakt�r. bu ay�rma i�lemi tabii ki rastgele bir noktadan yap�lmamal� ve kod i�erisinde tekrar
eden yada sadece bir i� yapan kod bloklar� �eklinde ayr��t�r�lmal�d�r). @param ile fonksiyon parametreleri ve @return ile de fonksiyondan d�nen de�erler a��klanmal�. Burada ki yorumlarda ayn� �ekilde 
k�sa olmal� ve e�er bu parametrelerin �nemli g�revleri varsa �zeti fonksiyon ba��nda detaylar� ise kod sat�rlar�nda yorumlarda verilmelidir. 

De�i�ken isimleri o de�i�kenin kullan�m nedenini g�stermeli. Baz� k�saltmalarda s�k�nt� yok(Array yerine Arr gibi) ve i, j, k gibi index i�in kullan�lan de�i�kenlerde de detayl� bir isim yazman�z gerekmez.
Ancak bu tarz tek harf i�eren de�i�kenleriniz sadece index i�lemi i�in kullan�lmal�d�r. fonksiyonlarda her de�i�ken i�inde a��klama yazman�z gerekir ancak yine index gibi de�i�kenlerde belirtmenize 
gerek yok. say� i�eren de�i�kenlerden ka��n�n(tmp1, tmp2, tmp3 gibi de�i�kenler sadece kaos yarat�r). de�i�ken ismi a��klay�c� olsada sonuna 2 3 ekledi�inizde �ok bir anlam� kalmamakta. 

Unutmay�n bu yorumlarda ki ama� kodunuzun ba�ka ki�iler taraf�ndan okunulabilir olmas�n� sa�lamakt�r. Bu y�zden yazd���n�z yorumlar� o kodu yazarkenki bak�� a��n�zla de�il o kodla ilk kez kar��la��yormu�
gibi yaz�n. zamanla nerelerde ne tarz yorumlar yazman�z gerekti�ini rahatl�kla g�rebileceksiniz ancak ba�lang��ta olabildi�ince yorum yaz�n. 
*/


/*
@brief compares two numbers based on ordering type and returns the comparison result.

@param First first number in comparison. This is the number that comes before in the array.
@param Second second number in comparison. This number comes after the First parameter
@param orderType determines the type of ording, if 0 Ascending, if 1 Descending.

@return return the comparison results of First and Second depending on orderType
*/
int sortOrder(int First,int Second,int orderType){
	if(orderType==0){ // orderType 0 is Ascending
		return First>Second;
	}else{// Descending
		return First<Second;
	}
}



/*
@brief a function that sorts the given array with the given type of ordering style

@param Arr array that contains the values to be sorted
@param n array lenght
@param orderType determines the type of ording, if 0 Ascending, if 1 Descending.

@return
*/
void bubleSort(int* Arr, int n,int orderType){
	int i,j;
	int temp_Swap;
	
	for(i=0;i<n;i++){// outer loop repeats the inner loop n time so that every member of the array are in the right place.
		for(j=0;j<n-1;j++){ // inner loop goes through every member of the array. it stops at n-1 because the comparison is between j and j+1
			if(sortOrder(Arr[j],Arr[j+1],orderType)){ // if the function return true we swap the two number in the array. sortOrder compares two numbers based on orderType.
				temp_Swap=Arr[j];
				Arr[j]=Arr[j+1];
				Arr[j+1]=temp_Swap;
			}
		}
	}
	
}
/*
@brief a function that prints the given array

@param Arr the array that to be printed
@param n array length

@return
*/
void printArray(int* Arr,int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",Arr[i]);
		
	}
}



int main(){
	int n;// Array length
	int *Arr;// Array that contains the number to be sorted
	int i; // index
	int orderType; // Order of the sorted array.
	
	printf("Array Size(if a number below and equal to 0 entered default size will be used): ");
	scanf("%d",&n);
	if(n<=0) // We determine if the user entered a wrong number or wished to use the default number
		n=DEFAULTSIZE;
		
		
	Arr=(int*) malloc(n*sizeof(int));// n is either the number user has entered or the default number
	
	for(i=0;i<n;i++){ // User inputs the array to be sorted
		printf("Enter %d. Number in the array: ",i);
		scanf("%d",&Arr[i]);
	}
	
	printf("Enter Order Type(0==Ascending, 1==Descending): ");
	scanf("%d",&orderType); // we take the ordering type from the user
	
	bubleSort(Arr,n,orderType); // sorting the array
	printf("Sorted Array: ");
	printArray(Arr,n);
	
	return 0;
	
}
