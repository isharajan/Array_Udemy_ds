#include<stdio.h>

int binary_search(int low,int high,int key,int *a)
{	while(low<=high)
	{
		int mid = (low+high)/2;
		if(a[mid] == key)
		{
			return mid;
		}
		else if(a[mid]<key)
		{
			low = mid+1;
			
		}
		else
		{
			high = mid-1;
			
		}
	}
	return -1;
}

void main()
{
	int low,high,mid,res,key;
	int array[8] = {10,20,30,40,50,60,70,80};
	int arrlen = sizeof(array)/sizeof(array[0]);
	low  = 0;
	high = 7;

	printf("enter key element to search =  ");
	scanf("%d",&key);
	res =binary_search(low,high,key,array);

	//display
	printf("list\n");
	for(int i=0; i<arrlen; i++)
	{
		printf("%d ",array[i] );
	}
	printf("\n");

	if(res == -1)
	{
		printf("element not found\n");
	}
	else
	{
		printf("element %d found at position %d\n",array[res],res);
	}
	


}