#include <stdio.h>

int main() {
	int n, result = 0;
	int n1, n2, n3, n4;

	printf("���ڸ� ������ �Է��ϼ��� : ");
	scanf("%d", &n);

	n1 = n / 1000;
	n = n % 1000;

	n2 = n / 100;
	n = n % 100;

	n3 = n / 10;
	n4 = n % 10;

	printf("�Է��� ���� %dõ%d��%d��%d�Դϴ�.\n", n1, n2, n3, n4);
}