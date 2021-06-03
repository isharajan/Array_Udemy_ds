#include<stdio.h>
int * reverse(int *a, int arrlen)
{
	int i,j,temp;
	j=arrlen-1;
	for(i=0; i<arrlen/2; i++)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		j--;
	}
	return a;
}



void main()
{
	int *p,i;
	int array[] = {2,3,4,5};
	int arrlen  = sizeof(array)/sizeof(array[0]);

	//Display
	for(int i=0; i<arrlen; i++)
	{
		printf("%d ",array[i]);
	}
	printf("\n");

	int *a2    = reverse(array,arrlen);
	

	//print revesed array
	printf("reverse array\n");
	for(p=a2; p<a2+arrlen;p++)
	{
		printf("%d ",*p);
	}
	printf("\n");
}
