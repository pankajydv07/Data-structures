#include<stdio.h>
int main()
{
	int a[200],n;
	printf("Enter number of inputs : ");
	scanf("%d",&n);
	printf("Enter %d Numbers : ",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Entered Numbers are : \n");
	
	for(int i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
		printf("\n\nEntered Numbers in reverse order are : \n");
	
	for(int i=n-1;i>=0;i--)
	{
		printf("%d\t",a[i]);
	}

}
