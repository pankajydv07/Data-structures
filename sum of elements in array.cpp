#include<stdio.h>
int main()
{
	int a[200],n,sum=0;
	printf("Enter number of inputs : ");
	scanf("%d",&n);
	printf("Enter %d Numbers : ",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
		{
		sum=sum+a[i];	
		}
		
	printf("Sum of all elements in array : %d",sum);
	
	
}
