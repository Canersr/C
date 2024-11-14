#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	double a,b,c,delta,tekkok,x1,x2;
	FILE *dosya;
	
	printf("y= ax2 + bx +c tipindeki denklemin kökleri\n");
	printf("a katsayisi degeri nedir : "); scanf("%lf",&a);
	printf("b katsayisi degeri nedir : "); scanf("%lf",&b);
	printf("c katsayisi degeri nedir : "); scanf("%lf",&c);
	delta=(b*b)+(4*a*c);
	
	if(delta<0)
	{
		printf("REEL KOK YOK YA DA KOKLERI YOK\n");
	}
	if(delta==0)
	{
		tekkok=(+1*b)/(2*a);
	}
	if(delta>0)
	{
		x1=((-1*b)+(sqrt(delta)))/(2*a); // sprt()  --> karekök hesaplamak için kullanýlýr
		x2=((+1*b)-(sqrt(delta)))/(2*a);
		printf("x1 koku  : %.f\n",x1);
		printf("x2 koku  : %.f\n",x1);
		
		
		dosya=fopen("bilgiler.txt","a");
		fprintf(dosya,"%.1f  %.1f  %1.f --> x1 : %.2f  x2 : %.2f\n",
		a,b,c,x1,x2);
		fclose(dosya);
		printf("KOKLER KAYDEDILDI");
	}

/*             ---DENEMEM---
		
	double a,b,c,delta,tekkok,x1,x2,sayi,x;
	
	printf("bir sayi giriniz " ); scanf("%lf",sayi);
	delta=(b*b)-(4*a*c);
	
	if (delta<0);
	printf("KOK YOK %lf");
	
	if (delta==0);
	x=(b /2*a); //aa
	 
	 if (delta>0);
	 x= (-1*b+(sqrt(delta)));
	 
*/	

    















	return 0;
}
