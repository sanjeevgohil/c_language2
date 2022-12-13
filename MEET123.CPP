#include<stdio.h>
#include<conio.h>
void main ()
{
	float s,b,ns;
	clrscr();
	printf("\n enter salary:");
	scanf("%f",&s);
	if(s<=5000)
	{
		b=s*10/100;
	}
	else
	{
		b= s*5/100;
	}

	ns =s+b;

	printf("\n salary is :%9.2f",s);
	printf("\n bonus is:%9.2f",b);
	printf("\n net salary :%9.2f",ns);
	getch();
}






















