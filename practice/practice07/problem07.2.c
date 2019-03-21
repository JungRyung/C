#include <stdio.h>

void line(int n1, int n2, int n3, int n4, int n5)
{
	int i;

	for(i=0;i<n1;++i) printf(". ");
	for(i=0;i<n2;++i) printf("* ");
	for(i=0;i<n3;++i) printf(". ");
	for(i=0;i<n4;++i) printf("* ");
	for(i=0;i<n5;++i) printf(". ");
	printf("\n");
}

int main(void)
{
	int j;

	for(j=0;j<5;++j)
		line(9-j,1+2*j,9-j,0,0);
	for(j=0;j<5;++j)
		line(4-j,5,1+2*j,5,4-j);
	for(j=0;j<4;++j)
		line(1+j,5,7-2*j,5,1+j);
	for(j=0;j<5;++j)
		line(5+j,9-2*j,5+j,0,0);
	return 0;
}