#include<iostream.h>
#include<conio.h>
class abc
{
	int a;
	public:
	abc(){}
	abc (int i)
	{
		a=i;
	}
	void disp()
	{
		cout<<"\n Number is:"<<a;
	}
	int operator > (abc t1)
	{
		int flag;
		if(a>t1.a)
		{
			flag=1;
		}
		else
		{
			flag=0;
		}
		return flag;
	}
};
void main()
{
	abc a1(100),a2(300),a3(400);
	clrscr();

	if(a1>a2)
	{
		if(a1 > a3)
		{
			cout<<"\n First no is max";
		}
		else
		{
			cout<<"\n second no is max";
		}
	}
	else
	{
		if(a2 > a3)
		{
			cout<<"\n second no is max";
		}
		else
		{
			cout<<"\n third no is max";
		}
	}
	getch();
}