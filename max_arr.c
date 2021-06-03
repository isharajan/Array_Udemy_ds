#include<stdio.h>
int find_max(int *a,int arrlen)
{
	int i,max;
	max = a[0];
	
	for(i=0; i<arrlen; i++)
	{
		printf("%d ",a[i]);
		if(a[i]>max)
		{
			max = a[i];
		}
	}
	printf("\n\n");
	return max;
}

void main()
{
	int array[] = {240,364,432,500,691,-27,0,65,-4};
	int arrlen  = sizeof(array)/sizeof(array[0]);
	int result  = find_max(array,arrlen);
	printf("max_element = %d\n",result);
}