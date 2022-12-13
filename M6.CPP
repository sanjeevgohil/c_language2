//With Argument No Return value
#include<iostream.h>
#include<conio.h>
void sum(int,int,int,int);
void main()
{
	int a[10],i,s,flag=0;
	clrscr();

	//Input Element an array
	for(i=0;i<=9;i++)
	{
		cout<<"\nEnter Number:";
		cin>>a[i];
	}
	cout<<"\nEnter Searching Element:";
	cin>>s;

	sum(a[10],i,s,flag=0);
}
void sum(a[10],i,s,flag=0)
{
	//Process to find searching element in an array
	for(i=0;i<=9;i++)
	{
		if(a[i] == s)
		{
			flag=1;
			cout<<"\nSearching Element Found in List";
			break;
		}
	}
	if(flag == 0)
	{
		cout<<"\nSearching Elenent Not Found in List";
	}
	getch();
}