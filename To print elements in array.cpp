#include<stdio.h>
int main()
{
	int a[20];
	printf("Enter any 10 numbers : ");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Entered Numbers are : \n");
	
	for(int i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}

}
