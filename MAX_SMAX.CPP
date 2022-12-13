#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,max,smax;
	clrscr();
	for(i=0; i<=9; i++)
	{
		printf("Enter Number :");
		scanf("\n%d",&a[i]);
	}
	max=a[0];
	for(i=0; i<=9; i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	smax=a[0];
	for(i=0; i<=9; i++)
	{
		if(smax<max)
		{
			smax=a[i];
		}
	}
	printf("\nMax Is :%d",max);
	printf("\nSecomd Max Is :%d",smax);
	getch();
}