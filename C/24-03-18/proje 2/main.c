#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void islem()
{
	int s1,s2,toplam=0;
	printf("1. Sayiyi Giriniz :"); scanf("%d",&s1);
	printf("2. Sayiyi Giriniz :"); scanf("%d",&s2);
	toplam=s1+s2;
	printf("2 Sayinin Toplami : %d\n",toplam);
}

void ben()
{
	printf("Okay Oren");
}



int main() 
{
char *secim;
git:
	system("cls");
printf("Seciminiz nedir   :"); scanf("%c",&secim);

if (secim=='a' || secim=='A')
{
ben();
getch();
goto git;
} 	
if (secim=='b' || secim=='B')
{
islem();
getch();
goto git;
}





getch();
}
