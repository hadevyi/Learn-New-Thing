#include <stdio.h>

int main() {
	int days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int i, count = 0;

	printf("12�� �� 30�ϱ��� �ִ� ���� ");

	for (i = 1; i <= 12; i++)
		if (days[i] == 30) {
			printf("%d, ", i);
			count++;
		}
	
	printf("\b\b �� %d�� �Դϴ�.\n", count);
}