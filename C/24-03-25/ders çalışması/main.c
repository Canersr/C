#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*
    int a=20; int b=12; int c=7;
	printf("a<b  ?  %d\n",a<b);
	printf("a>b  %d\n",a>b);
	printf("a<=b  %d\n",a<=b);
	printf("a>=b  %d\n",a>=b);	
	printf("a==b  %d\n",a==b);
	printf("a!=b  %d\n",a!=b);
	
	
	printf("b mod c :%d\n",b % c);
	// veya --> || ve  -->&&
	printf("a<b veya b>c nin cevabý : \n");
	printf("--------------------------------\n");
	if (a<b && b>c)
	{
		printf("DOGRU\n");
		
	}
	else
	{
		printf("YANLIS\n");
	}
	*/
	
	//SORU: klavyeden girilen bir sayý 6ya tam bölünüp bölünmediðini ýspatlayýnýz
	
	int sayi;
	printf("bir sayi giriniz :"); scanf("%d",&sayi);
	if (sayi % 2==0 && sayi % 3==0)
	{
		printf("SAYI TAM BOLUNUR \n");
		
	}
	else
	{
		printf("SAYI TAM BOLUNMEZ \n");
	}
	
	
	
	
	
	
	getch ();
}
