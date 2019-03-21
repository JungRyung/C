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

int main(void)
{
	double a[100];
	int len, max_len=sizeof(a)/sizeof(a[0]);
	int i, min_i;

	len = input_dir(a,max_len);

	if(len>0)
	{
		min_i = 0;
		for(i=1; i<len; ++i)
			if(a[i]<a[min_i])
				min_i=i;
		printf("min_i=%d\n", min_i);
		printf("min_value=%g\n", a[min_i]);
	}
	else
		printf("no data\n");
	return 0;
}