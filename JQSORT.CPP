#include<stdio.h>
#include<conio.h>
#define size 10
void qsort(int [],int,int);
void main()
{
	int a[size],i;
	clrscr();
	for(i=0;i<=size-1;i++)
	{
		printf("\n Enter Number:");
		scanf("%d",&a[i]);
	}
	qsort(a,0,size-1);
	for(i=0;i<=size-1;i++)
	{
		printf("\n Number is:%d",a[i]);
	}
	getch();
}
void qsort(int a[],int first,int last)
{
	int mid,hi,lo,temp;
	mid=a[(first+last)/2];
	lo=first;
	hi=last;
	while(lo<=hi)
	{
		while(a[lo] < mid)
		{
			lo++;
		}
		while(a[hi] > mid)
		{
			hi--;
		}
		if(lo <= hi)
		{
			temp=a[lo];
			a[lo]=a[hi];
			a[hi]=temp;
			lo++;
			hi--;
		}
	}
	if(first < hi)
	{
		qsort(a,first,hi);
	}
	if(lo < last)
	{
		qsort(a,lo,last);
	}
}