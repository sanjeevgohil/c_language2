#include<iostream.h>
#include<conio.h>
class Abc
{
	int a,b;
	public:
	void setval(int i,int j)
	{
		a=i;
		b=j;
	}
	void display(void)
	{
		cout<<"\n value of A is:"<<a;
		cout<<"\n value of B is:"<<b;
	}
	Abc add (Abc a1)
	{
		Abc temp;
		temp.a=a+a1.a;
		temp.b=b+a1.b;
		return temp;
	}
};
void main()
{
	Abc a1,a2,a3;
	clrscr();
	a1.setval(10,20);
	a2.setval(30,40);
	a3=a1.add(a2);
	a1.display();
	a2.display();
	a3.display();
	getch();
}