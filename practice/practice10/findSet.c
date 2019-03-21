#include <stdio.h>

int find_set(double a[],int alen, double v[], int vlen)
{
	int i,j;

	for(i=0; i<alen; ++i)
	{
		for(j=0; j<vlen && a[i]!=v[j]; ++j)
			;
		if(j<vlen)
			return i;
	}
	return i;
}

int main(void)
{
	double a[100]={1.1,2.2,3.3,4.4,3.3,2.2,1.1};
	double v[10];
	int alen=7, vlen, i;

	scanf("%d",&vlen);
	if(vlen>10)
		vlen=10;
	for(i=0;i<vlen && !(scanf("%lf", &v[i])!=1); ++i)
		;
	vlen = i;
	i=find_set(a,alen,v,vlen);
	if(i<alen)
		printf("found: %d\n", i);
	else
		printf("not found: %d\n", i);
	return 0;
}