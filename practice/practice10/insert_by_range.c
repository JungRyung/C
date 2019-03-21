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

void move(double a[], int beg, int end, int first)
{
	int i;

	if(first<beg){
		for(i=beg; i<end; ++i)
			a[first++] = a[i];
	}
	else{
		int last = first+(end-beg)-1;
		for(i=end-1; i>=beg; --i)
			a[last--] = a[i];
	}
}

int main(void)
{
	double a[100];
	int len, max_len=sizeof(a)/sizeof(a[0]);
	int beg, end, i;
	double new_v;

	scanf("%d%d",&beg,&end);
	scanf("%lf",&new_v);
	len = input_dir(a, max_len);
	move(a,beg,len,end);
	len+=end-beg;
	for(i=beg; i<end; ++i)
		a[i]=new_v;
	print(a,len);
	return 0;
}