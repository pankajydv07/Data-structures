#include<stdio.h>
int b_search(int [], int ,int,int);
int main()
{
	int m,num,r;
	
	int a[100],n,i;
	
	printf("Enter the number of elements in array : ");
	
	scanf("%d",&n);
	
	printf("Enter %d elements of an array :",n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Enter the element to search in array : ");
	scanf("%d",&num);
	r=b_search(a,0,n-1,num);
	if(r!=-1)
	{
		printf("Element found in array at index %d and position : %d .",r,r+1);
	}
	else
	{
			printf("Element not found in array .");
	}
	
}

int b_search(int a[] ,int l, int h, int n)
{

	while(l<=h)
{
	
	int m=(l+h)/2;
	if(a[m]==n)
	{
		return m;
	}
	else if(n>a[m])
	{
		l=m+1;
	}
	else
	{
		h=m-1;
	}
	
}
return -1;
}
