#include <stdio.h>

int main(void)
{
	int i,j;
	int n1, n2, n3;

	for(j=0; j<10; ++j)
	{
		n1 = 9-j;
		n2 = 1+j+j/2;
		n3 = 9-j/2;
		for(i=0; i<n1; ++i) printf(". ");
		for(i=0; i<n2; ++i) printf("* ");
		for(i=0; i<n3; ++i) printf(". ");
		printf("\n");
	}
	for(j=0; j<9; ++j)
	{
		n1 = 2+2*j;
		n2 = 13-j-((j+1)/2);
		n3 = 4-j/2;
		for(i=0; i<n1; ++i) printf(". ");
		for(i=0; i<n2; ++i) printf("* ");
		for(i=0; i<n3; ++i) printf(". ");
		printf("\n");
	}
}