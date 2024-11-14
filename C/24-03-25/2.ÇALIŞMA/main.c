#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*
	int a=15; 
	a++; a=a+1; a-=1;  */  //yandaki komutlar a sayýsýna +1 ekliyerek devam eder a-=1 ise çýkartýr cevap 16 çýkacaktýr.
	
	//SORU: PROGRAM ÇALIÞTIÐINDA KAÇ TANE SAYI GÝRLÝSÝN ÞEKLÝNDE SORU SORULACAKTIR O KADAR SAYI 
	//KLAVYEDEN GÝRÝLÝR(kaçýncý sayý girildiði de belirtilecek)
	//buna göre bu sayýlardan kaç tanesi tek,kaçtanesi çift ise bu tek ve çift sayýalrýn adet sayýsýný altalta yazdýrýnýz 
	  
	  int kactane; 
	  int i;     
	  int sayilar[999];
	  int tek=0;
	  int cift=0;          
	  printf("KAC TANE SAYI GIRILSIN  : "); scanf("%d",&kactane);
	  for(i=1; i<=kactane; i++)
	  {
	  	printf("%d. sayi nedir : ",i); 
	  	scanf("%d",&sayilar[i]);
	  }
	   
	   for(i=1; i<=kactane; i++)
	   if(sayilar[i] %2==1)
         {
      	tek+=1;
              	
		  }	
		  else
		  {
		  	cift+=1;
		  }
		  printf("teklerin adet sayisi %d\n");
		  printf("çiftlerin adet sayisi %d\n");
	
	return 0;
}
