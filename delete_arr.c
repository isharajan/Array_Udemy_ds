#include<stdio.h>

void delete(int *a,int count,int pos)
{
	if(pos>1 && pos <=count)
	{
		int i=0;
		int index = pos-1;
		if(index==0)
		{
			while(i<count-1)
			{
				a[i] = a[i+1];
				i++;
			}
			count--;
		}
		else
		{
			int j=0;
			while(j<index)
			{
				j++;
			}
			int k =j;
			while(k<count-1)
			{
				a[k] = a[k+1];
				k++;
			}
			count--;
		}

		for(int i=0; i<count; i++)
		{
			printf("%d ",a[i]);
		}
		printf("\n\n");

	}
	else
	{
		printf("Please enter valid position to delete from [1 - %d]\n",count);
	}
}

void main()
{
	int pos;
	int a[5] = {10,20,30,40,50};
	int count =5;

	//dispay
	for(int i=0; i<count; i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n\n");

	printf("enter position to delete ");
	scanf("%d",&pos);
	delete(a,count,pos);
}