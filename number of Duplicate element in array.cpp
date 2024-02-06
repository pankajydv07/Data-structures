#include<stdio.h>
int main()
{
	int a[200],n;
	int count=0;
	printf("Enter number of inputs : ");
	scanf("%d",&n);
	printf("Enter %d Numbers : ",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count++;
				printf(" Duplicate element :%d\t",a[i]);
			}
		}
	}
	printf("\nThe number of duplicate element in array is %d .",count);
	
}
