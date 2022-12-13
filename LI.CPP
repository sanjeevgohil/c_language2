#include<iostream.h>
#include<conio.h>
int i,a[10],s,flag=0;
void linear(int a[])
{
	for(i=0;i<=9;i++)
	{
		if(a[i] == s)
		{
			flag =1;
			cout<<"\nSearching Element Found:";
			break;
		}
	}
	if(flag == 0)
	{
		cout<<"\nSearching Element Not Found:";
	}
}
void main()
{
	clrscr();
	for(i=0;i<=9;i++)
	{
		cout<<"\nEnter Number:";
		cin>>a[i];
	}
	cout<<"\nEnter Searching Element:";
	cin>>s;
	linear(a);
	getch();
}