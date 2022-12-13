#include<stdio.h>
#include<conio.h>
void main()
{
	int Age;
	clrscr();
	printf("\nEnter Age:");
	scanf("%d",&Age);

	if(Age > 18)
	{
		printf("\n Person is eligible for voting");
	}
	else
	{
		printf("\n Person is not eligible for voting");
	}
	getch();
}