#include <stdio.h>

int is_prime(int n)
{
	int x;

	for(x=2; x<n && n%x!=0; x++)
		;
	if(x<n)
		return 0; //false
	else
		if(n<=1)
			return 0;
		else
			return 1;
}

int main(void)
{
	int beg, end;
	int n;

	scanf("%d%d", &beg, &end);

	for(n=beg; n<end; n++)
		if(is_prime(n))
			printf("%d ", n);
	printf("\n");
	return 0;
}