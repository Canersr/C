#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define uzunluk 10
#define yazdir printf
int main(int argc, char *argv[]) {
	
	system("color A");
	int a[uzunluk]={5,14,100,-8,78,11,-9,4,0,3};
 	int i;  for (i=0; i<=9;i++)  //for ve if kullan�rken sonuna noktal�virg�l kullan�lmaz 
	{
		yazdir("%d . elemanin degeri = %d\n",i+1,a[i]);
		//soru: for kullanarak ad�n� ve soyad�n� 6 kere altalta yazd�r
/*	
       for (i=0; i<5; i++)
	   printf("CANER SURMELIOGLU");	
 */	
	   //SORU2: KLAVYEDEN G�R�LEN B�R SAYININ �ARPIM TABLOSUNU ALTALTA YAZDIRINIZ 
	   
	   int sayi; 
	   printf("say� giriniz "); scanf("%d",&sayi);
	   
	   for(i=1; i<=10; i++)
	   {
	   	printf("%d x %d = %d\n",sayi,i,sayi*i);
	   }
	   
	   
	   
	   
	
	}

	
	
	
	
	
	
	return 0;
}
