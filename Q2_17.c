#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double r;
	double area;

	printf("�������� �Է��Ͻÿ�.");
	scanf("%lf", &r);

	area = r * r * 3.14;
	
	printf("���� ���� = %lf", area);

	return 0;
}