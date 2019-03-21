#include <stdio.h>

int main(void)
{
	int n1, n2, j, i;

	for(j=0; j<3; ++j){
		n1 = 3-j;
		n2 = 1+j;
		for(i=0; i < n1; ++i)printf(".");
		for(i=0; i < n2; ++i)printf("*");
		printf("\n");
	}
	return 0;
}