#include <stdio.h>

int main() {
	int num1, num2, tmp, greatest;

	printf("�� ���� ������ �Է��Ͻÿ� : ");
	scanf("%d %d", &num1, &num2);

	if (num1 < num2) {
		tmp = num1;
		num1 = num2;
		num2 = tmp;
	} // num1�� ū ���� num2�� ���� ���� ��ġ�Ѵ�.

	while (1) {

		if (num2 == 0) {
			greatest = num1;
			break;
		}

		tmp = num1 % num2;
		num1 = num2;
		num2 = tmp;
	}

	printf("�ִ� ������� %d�Դϴ�.\n", num1);
}