#include<stdio.h>

int binarysearch(int *array, int size, int key)
{
	int mid;
	int high=size-1;
	int low=0;
	while(low<=high)
	{
		mid=(high+low)/2;
		if(array[mid]<key)
		{
			low=mid+1;
		}
		else if(array[mid]>key)
		{
			high=mid-1;
		}
		else
		{
			return mid;
		}
	}

	return -1;
}

int main(void)
{
	int arr[]={1,5,7,9,11,13,15};
	int result;
	int num=9;		
	result=binarysearch(arr,7,num);
	if(result==-1)
	{
		printf("number %d is not found\n",num);
	}
	else
	{

		printf("number %d is found in index [%d]\n",num,result);
	
	}
	return 0;
}


