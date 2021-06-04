#include<stdio.h>
int count_duplicates(int *a,int arrlen)
{	
	int j,count;
	for(int i=0; i<arrlen-1; i++)
	{
		if(a[i] == a[i+1])
		{
			j = i+1;
			while(a[i] == a[j])
			{
				j++;
			}
			printf("%d occurs %d times\n", a[i],j-i);
			i = j-1;
		}

	}
}

void main()
{
	int a[] = {1,2,2,3,3,3,4,4,4,6,7,8,10,14};
	int arrlen = sizeof(a)/sizeof(a[0]);


	for(int i=0;i<arrlen;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	count_duplicates(a,arrlen);
}