#include<stdio.h>

int get_index(int a[],int arrlen,int element)
{	
	int i;
	
	for(i=0; i<arrlen; i++)
	{
		if(a[i] == element)
		{
			return i;
		}
	}
	return -1;
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
	int element;
	int array[] = {10,20,30,40,50};
	int arrlen  = sizeof(array)/sizeof(array[0]);
	display(array,arrlen);


	printf("enter element form the array to get an index\n");
	scanf("%d",&element);
	int res = get_index(array,arrlen,element);


	if(res < 0)
	{
		printf("index not found\n");
	}
	else
	{
		printf("index found at %d\n",res);
	}
}