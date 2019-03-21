#include <stdio.h>

int main(void)
{
	int a[3] = {2,2,2};
	int sz=3, n=1;
	int i,j;

	for(i=0; i<sz; ++i)
		n *= 3;
	printf("%d\n", n);

	for(j=0; j<n; ++j)
	{
		for(i=0; i<sz; ++i)
			printf("%d ", a[i]);
		printf("\n");

		for(i=sz-1; i>=0 && !(a[i]!=0); --i)
			a[i]=2;
		if(i>=0)
			--a[i];
	}
	return 0;
}