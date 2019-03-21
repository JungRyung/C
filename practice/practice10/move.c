#include <stdio.h>

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
	double a[100] = {1.1,2.2,3.3,4.4,5.5,6.6,7.7};
	int len=7, beg, end, first, last, i;

	scanf("%d%d%d",&beg,&end,&first);
	print(a, len);
	move(a,beg,end,first);
	print(a,len);
	return 0;
}