#include <stdio.h>

int main() {
	int num1, num2, i;

	printf("�� ���� ���� �Է� : ");
	scanf("%d %d", &num1, &num2);

	printf("%d�� ��������� %d�� ����� �ƴ� ��\n", num1, num2);

	for (i = 1; i <= 100; i++) {
		if (i % num1 == 0 && i % num2 != 0) {
			printf("%d ", i);
		}
	}

	return 0;
}