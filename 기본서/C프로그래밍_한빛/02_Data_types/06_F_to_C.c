#include <stdio.h>

int main()
{
	//int fahrenheit, celsius;
	double fahrenheit, celsius;

	//fahrenheit = 72;
	//celsius = (5 / 9) * (fahrenheit - 32);
	fahrenheit = 72.0;
	celsius = (5.0 / 9.0) * (fahrenheit - 32.0);

	//printf("ȭ���µ� %d���� �����µ� %d���Դϴ�.\n", fahrenheit, celsius);
	printf("ȭ���µ� %lf���� �����µ� %lf���Դϴ�.\n", fahrenheit, celsius);

	return 0;
}

// ����� �ּ��� �ٲ�� ���� �ҽ��̸�, �ּ� �ϴ��� �ҽ��� ������ �ҽ��̴�.