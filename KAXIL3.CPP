#include<iostream.h>
#include<conio.h>
class B;
class A
{
	int a;
	public:
	void setval(int i)
	{
		a=i;
	}
	friend void disp(A a1,B b1);
};
class B
{
	int b;
	public:
	void setval(int j)
	{
		b=j;
	}
	friend void disp(A a1,B b1);
}
void disp(A a1,B b1)
{
	cout<<"\n value of A is:"<<a1.a;
	cout<<"\n value of B is:"<<b1.b;
	cout<<"\n total is:"<<a1.a+b1.b;
}
void main()
{
	A a1;
	B b1;
	clrscr();
	a1.setvel(10);
	b1.setval(20);
	disp(a1,b1);
	getch();
}