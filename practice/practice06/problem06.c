#include <stdio.h>

int main(void)
{
	int a,r,n;
	int s,ai,i;

	scanf("%d%d%d", &a, &r, &n);

	s=0;
	ai=a;
	for(i=0; i<n; ++i){
		if(i==0)
			printf("%d ", ai);
		else{
			ai *= r;
			printf("+ %d ", ai);
		}
		s += ai;
	}
	printf("= %d\n", s);
	return 0;
}