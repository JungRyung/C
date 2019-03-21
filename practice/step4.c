#include <stdio.h>

int main(void)
{
	int n1, n2, n3, i, j;

	for(j=0; j<10; j++)
	{
		n1 = 9 - j;
		n2 = 1 + 2*j;
		n3 = 9 - j;
		for(i=0; i<n1; i++)printf(". ");
		for(i=0; i<n2; i++)printf("* ");
		for(i=0; i<n3; i++)printf(". ");
		printf("\n");
	}

	for (j = 0; j < 9; ++j)
	{
		n1 = 1 + j;
		n2 = 17 - 2*j;
		n3 = 1 + j;
		for(i=0; i<n1; i++)printf(". ");
		for(i=0; i<n2; i++)printf("* ");
		for(i=0; i<n3; i++)printf(". ");
		printf("\n");
	}

	return 0;
}