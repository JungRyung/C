#include <stdio.h>

void Swap(int arr[], int a, int b)
{
	int temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;
}

void quickSort(int arr[], int left, int right)
{
	int low = left, high = right;
	int pivot = arr[(left+right)/2];

	while(low<=high)
	{
		while(arr[low]<pivot)
			++low;
		while(arr[high]>pivot)
			--high;

		if(low<=high)
		{
			Swap(arr,low,high);
			++low;
			--high;
		}
	}

	if(left<high) quickSort(arr,left,high);
	if(low<right) quickSort(arr,low,right);
}

int main()
{
	int i;
	int a[8] = {9,8,7,6,5,4,3,2};

	for(i=0; i<8; ++i){
		printf("%d ", a[i]);
	}
	printf("\n");

	quickSort(a,0,7);

	for(i=0; i<8; ++i){
		printf("%d ", a[i]);
	}
	printf("\n");

	return 0;
}