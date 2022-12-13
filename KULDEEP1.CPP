#include<stdio.h>
#include<conio.h>
void main()
{
	int i,s,e,tot;
	clrscr();
	printf("\n enter number:");
	scanf("%d",&s);
	printf("\n enter number:");
	scanf("%d",&e);

	for(i=s;i<=e;i=i+1)
	{
		printf("\n enter number is:%d",i);
		tot=tot+i;
	}
		printf("\n enter number is:%d",tot);
		getch();
}