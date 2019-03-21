#include <stdio.h>

void max_swap(int *pa, int *pb)
{
	int tmp;

	if(*pa > *pb)
		return;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

int main(void)
{
	int a, b, tmp;

	scanf("%d%d", &a, &b);
	printf("a==%d, b==%d\n", a, b);

	max_swap(&a, &b);

	printf("a==%d, b==%d\n", a, b);
	return 0;
}