#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
 {
 	
	 system("color B");
 	int boyut[3][4]={8,4,3,3,6,7,9,2,5,5,3,4};
 	
 	int i,j;
 	for(i=0; i<3;i++)
 	{for(j=0; j<4;j++)
 	
	 { printf("l�tfen %d. satiri; %d.stunu giriniz",i+1,j+1); 
 	scanf("%d",&boyut[i][j]);
	 }
}
for(i=0; i<3;i++)
 	{for(j=0; j<4;j++)
 	
	 {
	 		printf("%5d",boyut[i][j]);
	 }
	  printf("\n");
}
 
	 
	
	 
	 







	return 0;
}
