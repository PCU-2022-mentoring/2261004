#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double x, y;
	double sum;

	printf("x�� y�� �Է��Ͻÿ� >>");
	scanf("%lf %lf", &x, &y);

	sum = x + y;

	printf("�� ���� �� = %lf", sum);

	return 0;
}