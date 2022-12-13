#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	i=1;
	while(i<=5)
	{
		for(j=i;j>=1;j--)
		{
			printf(" %d ",j);
		}
		printf("\n");
		i++;
	}
	getch();
}