#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	FILE *DOSYA;
	DOSYA=fopen("bilgiler.txt","r");
	char veri;
	do{
		veri=getc(DOSYA); printf("%c",veri);
		
	}
	while(!feof(DOSYA)); fclose(DOSYA);
	
	return 0;
}
