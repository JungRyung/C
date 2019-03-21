#include <stdio.h>

int main(void)
{
	int s, ai, n, i;

	scanf("%d", &n);
	s=0;
	ai = 1;
	for (i = 1; i <= n; ++i)
	{
		printf("%d ", ai);
		s += ai;
		if(i%2 == 1)
			ai = ai + 3;
		else
			ai = -2*ai;
	}
	printf("\nsum = %d\n", s);
	return 0;
}