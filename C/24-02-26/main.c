#include <stdio.h>
#include <stdlib.h>
#include <windows.h> //windowsun k�t�phanesini kullan�r
#include <conio.h>
#include <locale.h> //t�rk�e karakterler i�in kullan�lan bir k�t�phane 
#include <math.h>
#define toplama 3*8
#define ben "CANER SURMELIOGLU"


/* un this program using the console pauser or add your own getch, system("pause") or input loop */
//sat�r bazl� not almak i�in kullan�l�r 
/* altalta not almak i�in kullan�l�r. */
int main(int argc, char *argv[]) 

{
 
      const double sayi=3.15;          // tamsay�lar int ondal�k say�lar doble veya float (double daha kullan��l�)
      const int gelir=17000;
	  
	   
 setlocale (LC_ALL,"Turkish");
 puts(ben); //stringleri ekrana yazd�r�r
 printf("%d\n",toplama); //integer karakterleri ekerana yazd�r�r. \n alt�na yazd�r�r
 printf("3 ile 8 in �arp�m� : %d\n ",toplama);
 printf("\n\n\t benim adim : %s\n", ben);  // \t bo�luk b�rak�yor 
 printf("SAYININ DEGER� : %.f\n",sayi); // f\ komutu 6 basamakl� yazar     .f tqm k�sm� yazar      
printf("GELIRIM : %d T.L. \n",gelir);
    // getch();  exe de mesaj vermez 
    //exit(0);
	 system("PAUSE");  //pause b�y�k veya k���k harfle yaz�lablir
	  
}  
