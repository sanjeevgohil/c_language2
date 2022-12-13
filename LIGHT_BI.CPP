#include<stdio.h>
#include<conio.h>
void main()
{
	float u,uc,gt,fc,mr,total;
	clrscr();
	printf("\nEnter Unit :");
	scanf("%9.2f",&u);

	if(u=<=50)
	{
		uc=u*0.50
	}
	else if(u<=100)
	{
		uc=(50*0.50)+((u-50)*0.75);
	}
	else if(u=<=200)
	{
		uc=(50*0.50)+(50*0.75)+((u-100)*1);

	}
	else
	{
		uc=(50*0.50)+(50*0.75)+(100*1)+((u-200)*1.20);
	}

	gt=uc*40/100;
	fc=(uc=gt)*10/100;
	mr=25;
	total=uc+gt+fc+mr;

	printf("\nUnit Charge    :%9.2f",uc);
	printf("\nGoverment Tax  :%9.2f",gt);
	printf("\nFuel Charge    :%9.2f",fc);
	printf("\nMeter Charge   :%9.2f",mr);
	printf("\n ");
	printf("\nTotal Is       :%9.2f",total);
	getch();

}
