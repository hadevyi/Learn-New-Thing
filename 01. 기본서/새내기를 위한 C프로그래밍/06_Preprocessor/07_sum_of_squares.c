#include <stdio.h>
#define SQ(x) ((x) * (x))

int main() {
	int n, i, total = 0;

	printf("n�� ���� �Է��ϼ��� : ");
	scanf("%d", &n);

	printf(">> ");

	for (i = 1; i <= n; i++) {
		total += SQ(i);
		printf("%d��+ ", i);
	}

	printf("\b\b= %d\n", total);

	return 0;
}