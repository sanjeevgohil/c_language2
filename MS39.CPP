#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	i=5;
	do
	{
		for(j=5;j>=i;j--)
		{
			printf(" %d ",i);
		}
		printf("\n");
		i--;
	}while(i>=1);
	getch();
}