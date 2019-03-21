#include <stdio.h>

void min_swap(int *pa, int *pb)
{
	int tmp;

	if(*pa < *pb)
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

	min_swap(&a, &b);

	printf("a==%d, b==%d\n", a, b);
	return 0;
}