#include <stdio.h>

int main(void)
{
	int beg, end, i;
	int x, y, s=0;

	scanf("%d%d", &beg, &end);
	scanf("%d%d", &x, &y);
	for(i=beg; i<=end; ++i)
	{
		if(i%x == 0 || i%y == 0){
			printf("%d ", i);
			s += i;
		}
	}
	printf("\nsum == %d\n", s);
	return 0;
}