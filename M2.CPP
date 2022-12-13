#include<stdio.h>
#include<conio.h>
void main()
{
	int no;
	clrscr();
	printf("\nEnter Number:");
	scanf("%d",&no);

	if(no > 0)
	{
		printf("\nNumber is Positive %d",no);
	}
	else if(no < 0)
	{
		printf("\nNumber is Negative %d",no);
	}
	getch();
}