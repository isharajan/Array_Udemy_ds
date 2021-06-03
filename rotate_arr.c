#include<stdio.h>
void rotate(int *a, int arrlen, int rotation)
{
	int i;

	for(i=0; i<rotation; i++)
	{
		int temp = a[arrlen-1];
		int j=arrlen-1;
		while(j>0)
		{
			a[j] = a[j-1];
			j--;
		}
		a[j] = temp;

		printf("rotation = %d\n",i+1);
		for(int j=0; j<arrlen; j++)
		{
			printf("%d ",a[j]);
		}
		printf("\n\n");
		
	}
	


	
}

void main()
{
	int array[] = {10,20,30,40};
	int arrlen  = sizeof(array)/sizeof(array[0]);

	for(int j=0; j<arrlen; j++)
	{
		printf("%d ",array[j]);
	}
	printf("\n\n");

	rotate(array,arrlen,2);
}
