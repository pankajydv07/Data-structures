//Write a C program to find the sum of elements in an array using pointers

#include<stdio.h>
int main()
{
	int arr[5];
	int *ptr;
	ptr=arr;
	int sum=0;
	printf("Enter 5 array elements : ");
	for(int i=0;i<5;i++)
	{
		scanf("%d",ptr+i);
	}
	for(int i=0;i<5;i++)
	{
		sum=sum+*(ptr+i);
	}
	printf("The sum = %d ",sum);
	
}
