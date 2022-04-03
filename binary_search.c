#include<stdio.h>

int binary_search(int arr[100],int n ,int data)
{
	int mid ;
	int l,r;
	l=0;
	r=n-1;
	
	while(l<=r)
	{
		mid=(l+r)/2;
		
		if(data==arr[mid])
		{
			return mid;
		}
		else if(data>arr[mid])
		{
			l=mid+1;
		}
		else
		{
			r=mid-1;
		}
	}
	return -1;	
} 

int main()
{
	int arr[100];
	int n,i,data,found;
	printf("Enter the number of element: ");
	scanf("%d",&n);
	printf("Enter the array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the number you want to search:\n");
	scanf("%d",&data);
	found=binary_search(arr,n,data);
	if(found!=-1)
	{
		printf("The elemnt found at the index %d and position %d",found,found+1);
	}
	else
	{
		printf("Element not fond");
	}
	
	
}
