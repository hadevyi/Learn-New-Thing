#include <stdio.h>

int main() {
	int num, total = 0;

	printf("������ ���� ���� n�� �Է� : ");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++) {
		total += i * i;
	}

	printf("1���� %d������ ������ ���� %d�Դϴ�.\n", num, total);

	return 0;
}