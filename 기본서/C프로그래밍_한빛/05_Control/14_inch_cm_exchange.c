#include <stdio.h>

int main() {
	char option;
	double data;

	printf("�Է� ������ cm�̸� 'c'�� 'C'��, inch�̸� 'i'�� 'I'�� �Է��ϼ���.\n�Է� ���� : ");
	scanf("%c", &option);
	printf("�Է� �� : ");
	scanf("%lf", &data);

	if (option == 'c' || option == 'C') {
		printf("�Է��� %.2lfcm�� %.2lfinch�Դϴ�.\n", data, data / 2.54);
	}else if(option == 'i' || option == 'I') {
		printf("�Է��� %.2lfinch�� %.2lfcm�Դϴ�.\n", data, data * 2.54);
	}

	return 0;
}