#include<stdio.h>
//find duplicates in unsorted array

void find_pair(int *a,int arrlen,int k)
{
	int i=0,j=arrlen-1;
	
	while(i<j)
	{
		if(a[i] + a[j] == k)
		{
			printf("%d + %d = %d\n",a[i],a[j],k);
			break;
		}
		else if(a[i] + a[j] > k)
		{
			j--;
		}
		else
		{
			i++;
		}

	}

	if(i>=j)
	{
		printf("\nDon't have sum of the pair for %d \n",k);
	}
}

void main()
{
	int a[] = {1,2,4,5,6,9,10};
	int arrlen = sizeof(a)/sizeof(a[0]);

	//display
	for(int i=0;i<arrlen;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");


	int k;
	printf("enter target number to find a pair : ");
	scanf("%d",&k);
	
	//printf("target = %d\n",k);
	find_pair(a,arrlen,k);
}