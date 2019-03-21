#include <stdio.h>

int main(void)
{
	int a;

	scanf("%d", &a);
	if(a>=0)
		printf("GT or ET zero\n");
	if(a==0)
		printf("ET zero\n");
	if(a<0)
		printf("LT zero\n");
	return 0;
}