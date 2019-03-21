#include <stdio.h>

void line(n1, n2, n3, n4)
{
	int i;

	for(i=0; i<n1; ++i) printf(". ");
	for(i=0; i<n2; ++i) printf("* ");
	for(i=0; i<n3; ++i) printf(". ");
	for(i=0; i<n4; ++i) printf("* ");
	printf("\n");
}

int main(void)
{
	int j;

	for(j=0; j<10; ++j)
		line(9-j,1+2*j,9-j,0);
	for(j=0; j<9; ++j)
		line(0,1+j,17-2*j,1+j);
	return 0;
}