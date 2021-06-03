#include<stdio.h>
int find_min(int *a,int arrlen)
{
	int i,min;
	min = a[0];
	
	for(i=0; i<arrlen; i++)
	{
		printf("%d ",a[i]);
		if(a[i]<min)
		{
			min = a[i];
		}
	}
	printf("\n\n");
	return min;
}

void main()
{
	int array[] = {240,364,432,500,691,-27,0,65,-4};
	int arrlen  = sizeof(array)/sizeof(array[0]);
	int result  = find_min(array,arrlen);
	printf("min_element = %d\n",result);
}