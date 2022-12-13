#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<malloc.h>
#define NULL 0
struct node
{
	int data;
	struct node * link;
};
typedef struct node node;
node *p,*p1,*s,*s1
void main();
{
	char ch3;
	int num,ch,ch1;
	p = NULL;
	p1 = NULL;
	s = NULL;
	s1 = NULL;
	clrscr();
	while(1)
	{
		v1:
		clrscr();
		printf("\nWelcome to Menu Drive Program\n\n");
		printf("1:          Creat list \n");
		printf("2:          Count list \n");
		printf("3:          Display list \n");
		printf("4:          Delete list \n");
		printf("5:          Sort list \n");
		printf("6:          Find list \n");
		printf("7:          Exit \n");
		printf("\n\nEnter Ypur Choice===");
		scanf(ch);
		switch(ch)
		{
			case 1:
				while(1)
				{
					clrscr();
					printf("\nCreate the List \n\n");
					printf("1:       Creat \n");
					printf("2:       Creat at Biginning \n");
					printf("3:       Creat at Between \n");
					printf("4:       Creat at End\n");
					printf("5:       Exit \n\n");
					printf("\n Enter Your Choice==");
					scanf("%d",&ch1);
					switch(ch1)
					{
						case 1:
							create();
							break;
						case 2:
							addbeg();
							break;
						case 3:
							addbet();
							break;
						case 4:
							goto v1;
					}
				}
				case 2:
					count();
					terminate;
					break;

				case 3:
					display();
					terminate;
				case 4:
					display();
					terminate;
				case 5:
					display();
					terminate;

		}
	}

}