#include<stdio.h>
#include<conio.h>
#define size 10

int f=-1,r=-1;
int queue[size];

void push(int);
void pop(int);
void peep();
void check(int);
void main()
{
	int no,ch;
	while(1)
	{
		clrscr();
		printf("\n1.insert");
		printf("\n2.Delete");
		printf("\n3.Display");
		printf("\n4.Exit");
		printf("\n Enter Choice:");
		scanf("%d",ch);

		switch(ch)
		{
			case 1:
				printf("\n Insert Element");
				scanf("%d",&no);
				push(no);
				getch();
				break;

			case 2:
				printf("\n Enter Element
		}
	}
}