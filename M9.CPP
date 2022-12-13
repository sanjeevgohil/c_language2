#include<stdio.h>
#include<iostream.h>
#include<conio.h>
int a[10],i,flag=1,s,f,l,mid;
class Abc
{
	public:
	void input(void)
	{
		for(i=0;i<=9;i++)
		{
			cout<<"\nEnter No:";
			cin>>a[i];
		}
		cout<<"\nEnter Searching Element:";
		cin>>s;
	}
	void process(void)
	{
		f=0;
		l=9;
		while(f<=l)
		{
			mid=(f+l)/2;
			if(s < a[mid])
			{
				l = mid-1;
			}
			else if(s > a[mid])
			{
				f = mid+1;
			}
			else
			{
				flag=0;
				break;
			}
		}
	}
	void output(void)
	{
		if(flag)
		{
			cout<<"\nSearching Element Not Found in list";
		}
		else
		{
			cout<<"\nSearching Element Found in list:";
		}
	}

};
void main()
{
	Abc a1;
	clrscr();
	a1.input();
	a1.process();
	a1.output();
	getch();
}