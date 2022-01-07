#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[10],brr[10],i,j;
	printf("enter the elements of first set");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the elements of second set");
	for(i=0;i<10;i++)
	{
		scanf("%d",&brr[i]);
	}
	for(i=0;j<10;j++)
	{
		for(j=0;j<10;j++)
		{
			if(brr[j]%arr[i]==0)
			{
				printf("(%d,%d),",arr[i],brr[j]);
			}
		}
	}
}
