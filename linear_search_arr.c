#include<stdio.h>
 int linear_search(int *a, int key, int arrlen)
 {	
 	int i;
 	for(i=0; i<arrlen; i++)
 	{
 		if(key == a[i])
 		{	
 			printf("\nsearch_element = %d   found at position %d\n",key,i);
 			return 1;
 		}
 	}
 	

 	return 0;
 }



void display(int *a,int arrlen)
{
	int i;
	for(i=0; i<arrlen; i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}

 void main()
 {
 	int key;
 	int array[] 	= {2,4,6,8,10};
	int arrlen   	= sizeof(array)/sizeof(array[0]);
	display(array,arrlen);

	printf("enter key to search\n");
	scanf("%d",&key);
	
	int result 		= linear_search(array,key,arrlen);


	if(result == 1)
	{
		printf("element found\n");
	}
	else
	{
		printf("element not found\n");
	}

 }