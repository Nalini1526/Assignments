/*3.Write a C program for linear search algorithm.*/
#include<stdio.h>

void main()
{
int a[10]={23,15,48,2,51,18,36,15,42,12};
int n,i,f;
printf("\n Enter item for search");
scanf("%d",&n);
for(i=0;i<10;i++)
    {
	if(a[i]==n)
	{
	f=i+1;
	   break;
	}
	else
	{
	f=0;
	}
    if(f!=0)
	{
	printf("\n element found at location %d\n",f);
	}
	else
	{
	printf("\n element not found\n");
	}
}
}


