#include <stdio.h>
#define SIZE 5000

int main(void){
	//de�i�ken tan�mlar�
	char dizi[SIZE];
	int i,length=0;
	
	//kullan�c�dan metni al�r
	printf("Metni giriniz:");
	gets(dizi);
	
	//dizi uzunlu�unu bulur
	while(dizi[length]!='\0'){
		length++;
	}
	
	//ilk harf k���kse d�zeltir
	if(dizi[0]<'z'&&dizi[0]>'a'){
		dizi[0]=dizi[0]+('A'-'a');
	}
	//dizi �zerinde tek d�ng�yle gerekli i�lemleri yapar
	for(i=0;i<length;i++){
		//noktadan sonraki karakter bo�luksa ondan sonraki karakteri b�y�k harf yapar
		if(array[i]=='.'&&array[i+1]==' '){
			if(array[i+2]<='z'&&array[i+2]>='a'){
				array[i+2]=array[i+2]+('A'-'a');
			}   
		    
		}
		//noktadan sonraki karakter k���k harfse b�y�k harf yapar
		if(array[i]=='.'&&array[i+1]!=' '){
			if(array[i+1]<='z'&&array[i+1]>='a'){
				 array[i+1]=array[i+1]+('A'-'a');
			}
		           	
		}
		
	}
	//d�zeltilmi� metni yazd�r�r
	printf("Cikti:\n%s",array);
	
	return 0;
}
