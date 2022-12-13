#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	i=1;
	do
	{
		for(j=i;j<=5;j++)
		{
			printf(" %d ",i);
		}
		printf("\n");
		i++;
	}while(i<=5);
	getch();
}