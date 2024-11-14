#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,r;
	int secim;
	float cels;
	int fahr;

	printf("[A] Fahrenheiti celsiusa cevirme\n ");
	printf("[3] Dairenin alaný ve cevresi \n");
	printf("seciminiz nedir   :"); scanf(" %c",&secim);
	if (secim =='A' || secim =='a'){
	printf("Lutfen fahrenheit derecesini giriniz  :"); scanf("%d",&fahr);
	cels=(fahr-32)*1.8;
	printf("Celsius derecesi   : %.2f\n",cels);
	getch();	
	} else {
		exit(1);
	}
	
	
	
	switch(secim){
		case '3':{
			printf("Lutfen dairenin yaricapini giriniz   :");  scanf("%d",&r);
			yaricap(r);
			alan(r);
			break;
  			default:
			  exit(1);	
		}
	}
	
	
	return 0;
}
void yaricap(int r){
    
    float cevre;
	cevre=2*3.14*r;
	printf("Dairenin yaricapi   : %.2f\n",cevre) ; 
}


void alan(int r){

	float alan;
	alan=3.14*r*r;
	printf("Dairenin alaný   :%.2f\n",alan);
	
}
