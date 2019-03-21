#include <stdio.h>

void print(double a[], int len)
{
	int i;

	for(i=0; i<len; ++i)
		printf("%g ", a[i]);
	printf("\n");
}

int main(void)
{
	double a[100] = {1.1,2.2,3.3,4.4,5.5,6.6,7.7};
	int len=7, beg, end, first, i;

	scanf("%d%d%d", &beg,&end,&first);
	print(a,len);
	for(i=beg; i<end; ++i)
		a[first++] = a[i];
	print(a,len);
	return 0;
}