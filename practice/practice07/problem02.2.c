#include <stdio.h>

int main(void)
{
	int x, n;

	scanf("%d", &n);

	for(x=2; n%x !=0 && x!=n; ++x)
		;
	if(x == n)
		printf("%d is a prime.\n", n);
	return 0;
}