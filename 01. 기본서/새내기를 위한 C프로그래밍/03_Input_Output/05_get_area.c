#include <stdio.h>

void main(void){
	double width, height, area;

	printf("�غ�, ���� : ");
	scanf("%lf %lf", &width, &height);

	area = width*height / 2;

	printf("�غ� = %.2lfcm, ���� = %.2lf�� �ﰢ���� ���� = %.2lfcm��\n", width, height, area);
}