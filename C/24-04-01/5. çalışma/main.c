#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>        //strcmp komutu i�in kullan�l�r
#include <ctype.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	int i,sonuc; char kadi[100]; int sifre; 
	printf("Kullanici adi nedir  :"); gets(kadi);
	printf("�ifreyi giriniz  : "); scanf("%d",&sifre);
	//kadi = toupper(kadi);
	for (i=0; i < strlen(kadi); i++)
	{
		kadi[i]=toupper(kadi[i]); //toupper kullan�lacak ise "SELAM" b�y�k yaz�lmal�d�r e�er "selam" �eklinde yazilacak ise tolower kullan�lmas� gerekir
	}
	
	sonuc=strcmp(kadi,"SELAM");
	
	if(sonuc==0 && sifre==123)
	{
		printf("BASARILI\n");
	}
	else
	{
		printf("BASARISIZ\n");
		goto menu;
	}
	
	
	
	
	return 0;
}
