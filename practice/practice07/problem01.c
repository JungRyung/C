#include <stdio.h>

int main(void)
{
	double a[5] = {1.1, 2.2, 3.3, 2.2, 1.1};
	double v;
	int len=5, i;

	scanf("%lf", &v);

	for(i=len; i>=0; i--)
	{
		if(a[i] == v)
		{
			printf("found: %d\n", i);
			break;
		}
	}
	if(i==-1)
		printf("not found: %d\n", i);
	return 0;
}