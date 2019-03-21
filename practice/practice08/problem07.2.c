#include <stdio.h>

int is_prime(int n)
{
	int x;

	for(x=2; x<n && n%x!=0; ++x)
		;
	return n>1 && !(x<n);
}

int main(void)
{
	int beg, end;
	int n;

	scanf("%d%d", &beg, &end);

	for(n=beg; n<=end && !(is_prime(n)); ++n)
		;
	if(n <= end)
		printf("found.\n");
	else
		printf("not found\n");
	return 0;
}