#include <stdio.h>
#define FRAME_SIZE 5
#define LENGTH_OF_ARRAY 33

void web_rnnoise(float *input_buffer, int input_buffer_length);
void add_one_array(float *inputArray, float *outputArray);
void printArray(float *inputArray, int length);
void setArray(float *inputArray, int length);

int main()
{
	float a[LENGTH_OF_ARRAY]={0,};
	//setArray(a,LENGTH_OF_ARRAY);
	printf("Before_Array\n");
	printArray(a,LENGTH_OF_ARRAY);

	web_rnnoise(a,LENGTH_OF_ARRAY);

	printf("After_Array\n");
	printArray(a,LENGTH_OF_ARRAY);

	return 0;
}

void web_rnnoise(float *input_buffer, int input_buffer_length)
{
	int i;
	int quotient = input_buffer_length / FRAME_SIZE;
	int remainder = input_buffer_length % FRAME_SIZE;
	printf("quotient : %d\n", quotient);
	printf("remainder : %d\n", remainder);
	float *input_pointer;

	input_pointer = input_buffer;
	for(i = 0 ; i < quotient; i++)
	{
		add_one_array(input_pointer,input_pointer);

		input_pointer += FRAME_SIZE;
	}

	// input_pointer += remainder;
	add_one_array(input_pointer,input_pointer);
}

void add_one_array(float *inputArray, float *outputArray)
{
	int i;
	for (i = 0; i < FRAME_SIZE; ++i)
	{
		outputArray[i] = inputArray[i] + 1;
	}
}

void printArray(float *inputArray, int length)
{
	int i;
	
	for (int i = 1; i <= length; ++i)
	{	
		printf("%.0f ", inputArray[i-1]);

		if(i%FRAME_SIZE == 0)printf("\n");
	}

	printf("\n");
}

void setArray(float * inputArray, int length)
{
	int i;
	for(i = 0; i < length ; i++)
	{
		inputArray[i] = i;
	}
}