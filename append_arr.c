#include<stdio.h>
#include<stdlib.h>

int * append(int *a,int count,int element)
{
	
	int i=0;
	
	while(i<count)
	{	
		i++;
	}
	a[i] = element;
	count++;
	

	/*for(int i=0; i<count; i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	*/
	
	return a;

}


void main()
{
	int arr[5] = {10,20,30,40};
	int element;
	int arrlen = sizeof(arr)/sizeof(arr[0]);
	int count =4;


	printf("Before append\n");
	for(int i=0; i<count; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n\n");
	

	printf("enter element to append = ");
	scanf("%d",&element);


	int *res = append(arr, count, element);


	printf("after append\n");
	for(int *p=res; p<res+arrlen; p++)
	{
		printf("%d ",*p);
	}
	printf("\n");
	

}