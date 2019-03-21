#include <stdio.h>
#include <float.h>

int input_dir(double a[],int max_len)
{
	int i, len;

	scanf("%d", &len);
	if(len>max_len)
		len=max_len;
	for(i=0;i<len && !(scanf("%lf", &a[i])!=1);++i)
		;
	return 1;
}

int main(void)
{
	double a[100];
	int len, max_len = sizeof(a)/sizeof(a[0]), i;
	double max_v1, max_v2, max_v3, new_v, prv_v;

	len = input_dir(a,max_len);

	max_v1 = max_v2 = max_v3 = -DBL_MAX;
	for(i=0;i<len;++i)
	{
		new_v = a[i];
		if(new_v > max_v1){
			prv_v=max_v1;
			max_v1 = new_v;
			new_v = prv_v;
		}
		if(new_v > max_v2){
			prv_v=max_v2;
			max_v2 = new_v;
			new_v = prv_v;
		}
		if(new_v > max_v3){
			prv_v=max_v3;
			max_v3 = new_v;
			new_v = prv_v;
		}
	}
	printf("%g %g %g\n",max_v1,max_v2,max_v3);
	return 0;
}