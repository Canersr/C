#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*
	int a=15; 
	a++; a=a+1; a-=1;  */  //yandaki komutlar a say�s�na +1 ekliyerek devam eder a-=1 ise ��kart�r cevap 16 ��kacakt�r.
	
	//SORU: PROGRAM �ALI�TI�INDA KA� TANE SAYI G�RL�S�N �EKL�NDE SORU SORULACAKTIR O KADAR SAYI 
	//KLAVYEDEN G�R�L�R(ka��nc� say� girildi�i de belirtilecek)
	//buna g�re bu say�lardan ka� tanesi tek,ka�tanesi �ift ise bu tek ve �ift say�alr�n adet say�s�n� altalta yazd�r�n�z 
	  
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
		  printf("�iftlerin adet sayisi %d\n");
	
	return 0;
}
