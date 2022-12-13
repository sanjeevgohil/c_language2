#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k;
	clrscr();
	i=1;
	while(i<=5)
	{
		k=i%2==0?0:1;
		for(j=1;j<=i;j++)
		{
			printf(" %d ",k);
			k=k==0?1:0;
		}
		printf("\n");
		i++;
	}
	getch();
}