#include<iostream.h>
#include<conio.h>
class Abc
{
	int a;
	public:
	void setval(int i);
	void disp(void);
};
void Abc::setval(int i)
{
	a = i;
}
void Abc::disp(void)
{
	cout<<"\nValue is:"<<a;
}
void main()
{
	clrscr();
	Abc a1,a2,a3;
	a1.setval(10);
	a2.setval(20);

	a1.disp();
	a2.disp();

	getch();
}