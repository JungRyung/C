#include <stdio.h>

int is_even(int n)
{
	return (!(n%2!=0));
}

int main(void)
{
	int n;

	scanf("%d", &n);
	if(is_even(n))
		printf("even\n");
	else
		printf("odd\n");
	return 0;
}