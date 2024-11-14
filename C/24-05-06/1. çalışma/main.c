#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct bilgiler
{
	char *isim;
	char *memleket;
	int yas;
};
struct bilgiler ogr[3];

int main(int argc, char *argv[]) {
	
	ogr[0].isim="CANER SURMELIOGLU";
	ogr[0].memleket="ANTALYA";
	ogr[0].yas=20;
	
	ogr[1].isim="CNR SURMELIOGLU";
	ogr[1].memleket="ANTALYA";
	ogr[1].yas=20;
	
	ogr[2].isim="CANER S.";
	ogr[2].memleket="ANTALYA";
	ogr[2].yas=20;
	
	int i;
	
	for(i=0;i<3;i++)
	{
		printf("Adi: %s\n",ogr[i].isim);
		printf("Soyadi : %s\n",ogr[i].memleket);
		printf("Yasi : %d\n",ogr[i].yas);
	}

  







	return 0;
}
