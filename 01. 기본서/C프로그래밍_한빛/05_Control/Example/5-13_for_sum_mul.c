#include <stdio.h>

int main() {
	int n, i, sum, factorial;

	printf("1���� ������ �հ� ���� ���մϴ�. ���� n��? ");
	scanf("%d", &n);

	// 1���� n������ ���� sum�� ���ϱ�
	sum = 0;
	for (i = 1; i <= n; i++)
		sum += i;

	// 1���� n������ ���� factorial�� ���ϱ�
	factorial = 1;
	for (i = 1; i <= n; i++)
		factorial *= i;

	printf("1���� %d������ ���� %d�Դϴ�.\n", n, sum);
	printf("1���� %d������ ���� %d�Դϴ�.\n", n, factorial);
	return 0;
}