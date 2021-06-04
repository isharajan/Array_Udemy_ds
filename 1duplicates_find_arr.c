#include<stdio.h>
//find duplicates in unsorted array

void find_duplicates(int *a,int arrlen)
{
	int i,j,count;
	
	for(i=0; i<arrlen; i++)
	{
		count =1;
		if(a[i]!=-1)
		{
			for (j=i; j<arrlen; j++)
			{
				if(a[i] == a[j])
				{
					count++;
					a[i] =-1;
				}
			}
			if(count>1)
			printf("%d occurs %d times\n",a[i],count);
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