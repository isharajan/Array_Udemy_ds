#include<stdio.h>
void merge(int a[],int b[],int arrlen1,int arrlen2)
{
	int i=0;
	int j=0;
	int k=0;
	int count= 0;
	int c[50];
	while(i<arrlen1 && j<arrlen2)
	{
		if(a[i] < b[j])
		{
			c[k++] = a[i++];
			count++;
			//i++;
		}
		else
		{
			c[k++] = b[j++];
			count++;
			//j++;
		}
	}

	if(i==arrlen1)
	{
		for(int iter=j; iter<arrlen2; iter++)
		{
			c[k++] = b[j];
			count++;
			j++;
		}
	}

	if(j==arrlen2)
	{
		for(int iter=i; iter<arrlen1; iter++)
		{
			c[k++] = a[i];
			count++;
			i++;
		}
	}

	//printf("count = %d\n",count);
	int alen3 = count;
	//display
	for(int p=0; p<alen3; p++)
	{
		printf("%d ",c[p]);
	}
	printf("\n");
	

}

void main()
{
	// two sorted array
	int a[5] = {1,3,5,7,9};
	int b[5] = {2,4,6,8,10};

	int arrlen1 = sizeof(a)/sizeof(a[0]);
	int arrlen2 = sizeof(b)/sizeof(b[0]);

	merge(a,b,arrlen1,arrlen2);
}