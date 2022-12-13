#include<iostream.h>
#include<conio.h>
class abc
{
	int a[10];
	public:
	void input(void)
	{
		int i;

		for(i=0;i<=9;i++)
		{
			cout<<"\n Enter Number:";
			cin>>a[i];
		}
	}
	void output(void)
	{
		int i;
		for(i=0;i<=9;i++)
		{
			cout<<"\n number is:"<<a[i];
		}
	}
};
void main()
{
	abc a1;
	clrscr();
	cout<<"\n size of a1 object is:"<<sizeof(a1);
	getch();
}