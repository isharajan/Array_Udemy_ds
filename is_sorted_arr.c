#include<stdio.h>
int is_sorted(int *a, int arrlen)
{
	for(int i=0; i<arrlen; i++)
	{
		if(a[i] > a[i+1])
		{
			return 0;
		}
	}
	return 1;
}

void main()
{
	int array[] = {10,20,30,-1,40,50};
	int arrlen = sizeof(array)/sizeof(array[0]);
	int result = is_sorted(array,arrlen);


	for(int i=0;i<arrlen;i++)
	{
		printf("%d ",array[i]);
	}
	printf("\n");


	if(result == 1)
	{
		printf("list is sorted\n");
	}
	else
	{
		printf("list is not sorted\n");
	}

}