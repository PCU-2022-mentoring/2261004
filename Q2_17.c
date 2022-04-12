#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double r;
	double area;

	printf("반지름을 입력하시오.");
	scanf("%lf", &r);

	area = r * r * 3.14;
	
	printf("원의 면적 = %lf", area);

	return 0;
}