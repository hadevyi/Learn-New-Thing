#include <stdio.h>

int main() {
	double start, end, sum = 0, dx, temp;
	int num, i;

	printf("���� ���� ������? ");
	scanf("%lf", &start);
	printf("���� ���� ����? ");
	scanf("%lf", &end);
	printf("n(���� ������ ����)��? ");
	scanf("%d", &num);

	dx = (end - start) / num;

	for (i = 1; i < num;i++) {
		temp = (start + i * dx) * (start + i * dx);
		sum += dx * temp;
	}

	printf("f(x) = x���� [%.1lf, %.1lf] ������ ���� �ٻ�ġ�� %.3lf�Դϴ�.", start, end, sum);
}