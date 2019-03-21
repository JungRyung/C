#include <stdio.h>

int main(void)
{
	double a[100] = {1.1,2.2,3.3,4.4,3.3,2.2,1.1};
	double v;
	int alen=7, i;

	scanf("%lf", &v);

	for(i=alen-1; i>=0 && a[i]!=v; --i)
		;
	if(i>-1)
		printf("found: %d\n", i);
	else
		printf("not found: %d\n", i);
	return 0;
}