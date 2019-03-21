#include <stdio.h>

int main(void)
{
	int a, b;

	scanf("%d%d", &a, &b);

	if(a%2 == 0)
		printf("a == even\n");
	if(a%2 != 0 && b%2 == 1)
		printf("a != even, b == odd\n");
	return 0;
}