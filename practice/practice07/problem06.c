#include <stdio.h>

int find(int *a, int num, int value)
{
	int i;
	for(i=num-1; i>=0 && a[i]==value; i--)
		;
	return i;
}

int main(void)
{
	int a[1024];
	int num, i, value;

	scanf("%d", &num);
	for(i=0;i<num;++i)
		scanf("%d", &a[i]);
	scanf("%d", &value);

	i=find(a,num,value);

	if(i==-1)
		printf("not found: %d\n", i);
	else
		printf("found: %d\n", i);

	return 0;
}