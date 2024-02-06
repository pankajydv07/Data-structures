#include<stdio.h>
int main()
{
	int a[200],n;
	int pos,value;
	printf("Enter number of inputs : ");
	scanf("%d",&n);
	printf("Enter %d Numbers : ",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the position to insert : ");
	scanf("%d",&pos);
	printf("Enter the value to insert : ");
	scanf("%d",&value);
	
	for(int i=n;i>=pos;i--)
	{
		a[i]=a[i-1];
	}
	a[pos-1]=value;
	n++;
	printf("Array after insertion : ");
	for(int i=0;i < n;i++)
	{
		printf("%d ",a[i]);
	}
}


