#include <stdio.h>

int main() {
	int num, i = 1;

	printf("����� 3�� ����� ������ : ");
	scanf("%d", &num);

	while (num > 0) {
		printf("%d ", 3 * i);
		i++;
		num--;
	}

	return 0;
}