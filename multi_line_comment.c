/***************************
이차방정식의 계수를 입력받고
판별식을 계산하여 출력하는 프로그램
***************************/

#include <stdio.h>

int main(void)
{
	double a;	//x^2의 계수
	double b;	//x^1의 계수
	double c;	//x^0의 계수
	double d;	//판별식 결과값

	scanf("%lf%lf%lf", &a, &b, &c);
	d = b*b - 4.0*a*c;
	printf("discriminant = %f\n", d);
	return 0;
}
