#include<iostream.h>
#include<conio.h>
void main()
{
	int i,j,temp,a[10];
	clrscr();
	for(i=0;i<=9;i++)
	{
		cout<<"\nEnter Number:";
		cin>>a[i];
	}
	for(i=1;i<=9;i++)
	{
		temp=a[i];
		for(j=i-1;j>=0&&a[j]>temp;j--)
		{
			a[j+1]=a[j];
		}
		a[j+1]=temp;
	}
	for(i=0;i<=9;i++)
	{
		cout<<"\nStarted Number is:"<<a[i];
	}
	getch();
}