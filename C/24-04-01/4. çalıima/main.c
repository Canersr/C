#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct oku { 
char ADI[20]; char SOYADI[20]; int yas; int tcno;
}; //k�me parantezi ile noktal�virg�l aras�na ogr yazmam�z yeterli 

int main(int argc, char *argv[]) { 

struct oku ogr;
printf("Ogrencinin adi nedir  : "); scanf("%s",&ogr.ADI);
printf("Ogrencinin soyadi nedir  :"); scanf("%s",&ogr.SOYADI);
printf("Ogrencinin t.c. kimlik numaras� nedir  : "); scanf("%d",&ogr.tcno);
printf("Ogrencinin yasi kact�r  : "); scanf("%d",&ogr.yas);
system("cls");

printf("\n Ogrencinin adi  : %s",ogr.ADI); printf("\n Ogrencinin soyadi  : %s",ogr.ADI);
printf("\n Ogrencinin T.C NO  : %d",ogr.tcno); printf("\n Ogrencinin yasi  : %d\n\n",ogr.yas);




	return 0;
}
