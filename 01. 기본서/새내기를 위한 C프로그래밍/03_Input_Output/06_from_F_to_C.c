#include <stdio.h>

void main(void){
	double f, c;

	printf("ȭ���µ�(F)�� �Է��ϼ���. : ");
	scanf("%lf", &f);

	c = (5.0 / 9.0)*(f - 32.0);

	printf("ȭ���µ� %.1lf�� �����µ��� %.1lf�Դϴ�.\n", f, c);
}