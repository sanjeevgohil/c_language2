#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("\n Enter first no:");
	scanf("%d",&a);
	printf("\nEnter second No:");
	scanf("%d",&b);
	printf("\n Enter third No:");
	scanf("%d",&c);


	if(a>b&& a>c)
	{
		printf("\n first No is max");

	}
	if (b>a && b>c)
	{
		printf("\n second No is max");

	}
	if (c>a && c>b)
	{
	      printf("\n third No is max");
	}
	getch();

}



