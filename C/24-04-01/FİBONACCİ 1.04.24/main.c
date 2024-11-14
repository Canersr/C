#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

int fib[10]; int i; fib[0]=0; fib[1]=1;

for (i=2; i<=9; i++)
fib[i]= fib[i-1] + fib[i-2];
for (i=0; i<=9; i++)
printf("%d. fibonacci sayisi : %d\n",i+1,fib[i]);




	return 0;
}
