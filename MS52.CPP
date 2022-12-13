#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k;
	clrscr();
	i=1;
	A:
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
	if(i<=5)
	{
		goto A;
	}
	getch();
}