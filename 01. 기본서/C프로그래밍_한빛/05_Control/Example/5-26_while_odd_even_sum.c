#include <stdio.h>

int main() {
	int n, odd, even, odd_sum = 0, even_sum = 0;

	printf("���� n�� �Է��Ͻÿ� : ");
	scanf("%d", &n);

	odd = 1;
	even = 2;

	while (odd <= n && even <= n) {
		odd_sum += odd;
		even_sum += even;
		odd += 2;
		even += 2;
	}

	printf("���� 1���� %d���� Ȧ������ ���� %d�̰� ", n, odd_sum);
	printf("¦������ ���� %d�Դϴ�.\n", even_sum);

	return 0;
}