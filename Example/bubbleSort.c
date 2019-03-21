#include <stdio.h>

void swap(int *array, int a,int b);
void printArray(int *array, int sizeOfArray);
void readAray(int *array);


int main()
{
	int i,j;
	int array[] = {0,};
	int sizeOfArray;

	printArray(array, sizeOfArray);


	for(i=sizeOfArray-1 ; i>0 ; i--)
	{
		for(j=0; j<i ; j++)
		{
			if(array[j] > array[j+1])
				swap(array , j, j+1);
		}
		printArray(array, sizeOfArray);
	}


}

void swap(int *array, int a, int b)
{
	int temp;
	temp = array[a];
	array[a] = array[b];
	array[b] = temp;
}

void printArray(int *array, int sizeOfArray)
{
	int i;
	printf("{");
	for(i=0 ; i < sizeOfArray ; i++)
	{
		if(i == sizeOfArray-1)
			printf(" %d", array[i]);
		else
			printf(" %d,", array[i]);
	}
	printf("}\n");
}
