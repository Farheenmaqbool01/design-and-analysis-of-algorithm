#include<stdio.h>
void swap(int a[],int p,int q)
{
	int temp=a[p];
	a[p]=a[q];
	a[q]=temp;
}
int partition(int a[],int lb,int ub)
{
	int pivot=a[lb];
	int start=lb;
	int end=ub;
	while(start<end)
	{

	while(a[start]<=pivot)
	{
	start++;
	}
	
		while(a [end]>pivot)
		{
		end--;	
		}
		if(start<end)
		{
			swap(a,start,end);
		}
}
swap(a,lb,ub);
return end;
}
void qs(int a[],int lb,int ub)
{
if(lb<ub)
{
int loc=partition(a,lb,ub);
qs(a,lb,loc-1);
qs(a,loc+1,ub);
}
}

void printArray(int A[], int size) 
{ 

    int i; 

    for (i = 0; i < size; i++) 

        printf("%d ", A[i]); 

    printf("\n"); 
} 
int main() 
{ 

    int arr[] = {12, 11, 13, 5, 6, 7}; 

    int arr_size = sizeof(arr) / sizeof(arr[0]); 

  

    printf("Given array is \n"); 

    printArray(arr, arr_size); 

  

    qs(arr, 0, arr_size - 1); 

  

    printf("\nSorted array is \n"); 

    printArray(arr, arr_size);
}

