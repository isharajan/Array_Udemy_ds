#include<stdio.h>
//find missing elements in sorted array

void find_missing_element(int *a,int arrlen)
{
	printf("missing elements\n");
	int diff = a[0] - 0;

	for(int i=0; i<arrlen; i++)
	{
		if(a[i]-i != diff)
		{
			while(diff < a[i]-i)
			{
				printf("%d ",i+diff);
				diff++;
			}
			printf("\n");
		}
	}
}

void main()
{
	int a[] = {1,2,3,4,6,7,8,10,14};
	int arrlen = sizeof(a)/sizeof(a[0]);


	for(int i=0;i<arrlen;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	find_missing_element(a,arrlen);
}