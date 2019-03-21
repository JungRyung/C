#include <stdio.h>

int main(void)
{
	int a[100];
	int sz, k, n;
	int i, j;

	scanf("%d%d", &sz, &k);
	for(i=0; i<sz; ++i)
		a[i] = 0;
	n = 1;
	for(i=0; i<sz; ++i)
		n *= k;
	for(j=0; j<n; ++j)
	{
		for(i=0; i<sz; ++i)
			printf("%d ", a[i]);
		printf("\n");
		for(i=sz-1; i>=0 && !(a[i]!=k-1); i--)
			a[i] = 0;
		if(i>=0)
			++a[i];
	}
	return 0;
}