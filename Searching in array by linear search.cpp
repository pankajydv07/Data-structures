#include<stdio.h>
int  main()
{
	int a[100],num,n,i;
	printf("Enter the number of elements in array : ");
	scanf("%d",&n);
	printf("Enter %d elements of an array :",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
    printf("Enter elements to search : ");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
    	if(num==a[i])
		{
    		printf("Element %d found  at position : %d and index : %d .",num,i+1,i);
    		break;
		}
		else
		{
			continue;
		}
	}
}
