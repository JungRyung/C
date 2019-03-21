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

void swap(double *pa, double *pb)
{
	int tmp;

	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

int main(void)
{
	double a[100];
	int len, max_len=sizeof(a)/sizeof(a[0]);
	int i, j;

	len = input_dir(a, max_len);

	for(i=0; j=len-1;i<j; ++i; --j)
		swap(&a[i],&a[j]);

	for(i=0; i<len; ++i)
		printf("%g ", a[i]);
	printf("\n");
	return 0;
}