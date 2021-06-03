#include<stdio.h>

int search(int *a,int search_element,int arrlen)
{
	int *arr;

	for(arr=a; arr<a+arrlen; arr++)
	{
		printf("%d ",*arr );
		if(search_element == *arr)
		{
			return 1;
		}

	}
	printf("\n");

	return 0;
}

void main()
{
	int array[] 		= {2,4,6,8,10};
	int arrlen   		= sizeof(array)/sizeof(array[0]);
	int search_element  = 10;
	int result 			= search(array,search_element,arrlen);

	printf("\nsearch_element = %d\n",search_element);

	if(result == 1)
	{
		printf("element found\n");
	}
	else
	{
		printf("element not found\n");
	}
}