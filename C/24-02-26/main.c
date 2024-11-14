#include <stdio.h>
#include <stdlib.h>
#include <windows.h> //windowsun kütüphanesini kullanýr
#include <conio.h>
#include <locale.h> //türkçe karakterler için kullanýlan bir kütüphane 
#include <math.h>
#define toplama 3*8
#define ben "CANER SURMELIOGLU"


/* un this program using the console pauser or add your own getch, system("pause") or input loop */
//satýr bazlý not almak için kullanýlýr 
/* altalta not almak için kullanýlýr. */
int main(int argc, char *argv[]) 

{
 
      const double sayi=3.15;          // tamsayýlar int ondalýk sayýlar doble veya float (double daha kullanýþlý)
      const int gelir=17000;
	  
	   
 setlocale (LC_ALL,"Turkish");
 puts(ben); //stringleri ekrana yazdýrýr
 printf("%d\n",toplama); //integer karakterleri ekerana yazdýrýr. \n altýna yazdýrýr
 printf("3 ile 8 in çarpýmý : %d\n ",toplama);
 printf("\n\n\t benim adim : %s\n", ben);  // \t boþluk býrakýyor 
 printf("SAYININ DEGERÝ : %.f\n",sayi); // f\ komutu 6 basamaklý yazar     .f tqm kýsmý yazar      
printf("GELIRIM : %d T.L. \n",gelir);
    // getch();  exe de mesaj vermez 
    //exit(0);
	 system("PAUSE");  //pause büyük veya küçük harfle yazýlablir
	  
}  
