#include <stdio.h>

int main(void)
{
	int x, n;

	scanf("%d", &n);

	for(x=2; (x<n) && (n%x!=0); x++)
		;

	if(n==x)
		printf("%d is a prime.\n", n);
	return 0;
}