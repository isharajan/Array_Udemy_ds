#include<stdio.h>
//find duplicates in unsorted array

void find_pair(int *a,int arrlen,int k)
{
	int h[100];
	for(int i=0; i<50; i++)
	{
		h[i] = ;
	}

	for(int j=0; j<arrlen; j++)
	{
		if(h[k - a[j]] !=0)
		{
			printf("%d + %d = %d\n",a[j],k-a[j],k);
		}
		h[a[j]]++;
	}
	if(j == arrlen)
	{
		printf("pair not found for %d \n",k );
	}
}

void main()
{
	int a[] = {10,11,23,42,5,6,9,8};
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