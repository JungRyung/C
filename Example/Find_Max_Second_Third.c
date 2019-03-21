#include <stdio.h>
#include <float.h>

int input_dir(double a[], int max_len);

int main(void)
{
	double a[100];
	int len, max_len = sizeof(a)/sizeof(a[0]), i;
	double max_v1, max_v2, max_v3, new_v, prv_v;

	len=input_dir(a,max_len);

	max_v1 = max_v2 = max_v3 = -DBL_MAX;
	for(i=0;i<len;++i)
	{
		new_v = a[i];
		if(){
			prv_v = max_v1;
			max_v1 = new_v;
			new_v = prv_v;
		}
		if(){
			prv_v = max_v2;
			max_v2 = new_v;
			new_v = prv_v;
		}
		if(){
			prv_v = max_v3;
			max_v3 = new_v;
			new_v = prv_v;
		}
	}
	printf("%g %g %g\n",max_v1,max_v2,max_v3);
	return 0;
}