#include <stdio.h>

int input_dir(double a[], int max_len)
{
	int i, len;

	scanf("%d",&len);
	if(len>max_len)
		len=max_len;
	for(i=0; i<len && !(scanf("%lf",&a[i])!=1); ++i)
		;
	return i;
}

void print(double a[], int len)
{
	int i;

	for(i=0; i<len; ++i)
		printf("%g ", a[i]);
	printf("\n");
}

int main(void)
{
	double a[100];
	int len, max_len = sizeof(a)/sizeof(a[0]);
	int i, j;
	double value;

	scanf("%lf", &value);
	len = input_dir(a, max_len);
	for(i=0,j=0; i<len; ++i)
		if(!(a[i]==value))
			a[j++]=a[i];
	len = j;
	print(a,len);
	return 0;
}