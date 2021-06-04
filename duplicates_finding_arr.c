#include<stdio.h>
//find duplicates in sorted array

void find_duplicates(int *a,int arrlen)
{
	int last_duplicate = a[0];

	printf("\nDuplicates elements\n");
	for(int i=0; i<arrlen; i++)
	{
		if(a[i]==a[i+1] && a[i]!= last_duplicate)
		{
			printf("%d\n",a[i]);
			last_duplicate = a[i];
		}
	}
}

void main()
{
	int a[] = {1,2,3,3,3,4,5,5,6,6,6,7,7,7,7};
	int arrlen = sizeof(a)/sizeof(a[0]);

	//display
	for(int i=0;i<arrlen;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	
	find_duplicates(a,arrlen);
}