#include<stdio.h>
//find missing elements in unsorted array

void find_missing_element(int *a,int arrlen,int new_arr_len)
{
	int b[new_arr_len];
	for(int j=0; j<arrlen; j++)
	{
		b[a[j]] ++;
	}

	printf("\nmissing elements\n");
	for(int k=0; k<new_arr_len; k++)
	{
		if(b[k]==0)
		{
			printf("%d\n",k);
		}
	}
}

void main()
{
	int a[] = {1,2,3,4,6,7,24,8,10,14,35};
	int arrlen = sizeof(a)/sizeof(a[0]);

	int max = a[0];
	for(int i=0;i<arrlen;i++)
	{
		printf("%d ",a[i]);

		if(a[i]>max)
		{
			max = a[i];
		}
	}
	//printf("max = %d\n",max);
	find_missing_element(a,arrlen,max);
}