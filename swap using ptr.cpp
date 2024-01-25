//Write a C program to swap the values of two integers using pointer

#include<stdio.h>
int swap(int *p, int *q)
{
	int t;
	t=*p;
	*p=*q;
	*q=t;
}
int main()
{
	int a=10,b=20;
	printf("Value before swap : a=%d  b= %d.",a,b);
	swap(&a,&b);
	
	printf("\nValue after swap : a=%d  b= %d.",a,b);
	
}
