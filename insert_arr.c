#include<stdio.h>
void  insert(int *a,int count,int element,int pos)
{

	if(pos >0 && pos<=count+1)
	{
		int index = pos-1;
		int i = count;
		while(i>index)
		{
			a[i+1] = a[i];
			i--;
		}
		a[i+1] = a[i];
		a[i] = element;
		count++;


		for(int i=0; i<count; i++)
		{
			printf("%d ",a[i]);
		}
		printf("\n\n");
	}
	else
	{
		printf("\nPlease enter valid position to insert from [1- %d]...!\n",count+1 );
	}

}

void main()
{
	int a[10] = {10,20,30,40,50,60};
	int count = 6;
	int element,pos;


	//display
	for(int i=0; i<count; i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n\n");
	

	printf("enter element to insert = ");
	scanf("%d",&element);

	printf("enter position to insert = ");
	scanf("%d",&pos);
	insert(a,count,element,pos);
}