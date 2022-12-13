#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("\n enter first no:");
	scanf("%d",&a);
	printf("\n enter second no:");
	scanf("%d",&b);

	c=a+b;
	printf("\n first number is:%d",a);
	printf("\n second number is:%d",b);
	printf("\n total is:%d",c);
	getch();
}