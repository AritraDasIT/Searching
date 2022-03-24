#include<stdio.h>

int main()
{
	int arr[100];
	int i , data ,n;
	i=0;
	
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	printf("Enter the array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter which element you want to search: ");
	scanf("%d",&data);
	
	for(i=0;i<n;i++)
	{
		if(arr[i]==data)
		break;
	}
	if(i<n)
	{
		printf("Data found at the index %d and position %d",i,i+1);	
	}
	else
	{
		printf("data not found");
	}
	
}
