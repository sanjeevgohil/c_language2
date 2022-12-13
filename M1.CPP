#include<stdio.h>
#include<conio.h>
void main()
{
	float km,mtr;
	clrscr();
	printf("\nEnter km:");
	scanf("%f",&km);

	mtr = km*1000;

	printf("\nkm is:%.2f",km);
	printf("\nmtr is:%.2f",mtr);
	getch();
}