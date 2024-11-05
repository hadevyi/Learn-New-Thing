#include <stdio.h>

int main() {
	// 1�� - switch�� ������ �������� �����ϴ�. ���� n�� ������ int��, case�� ���� ������, ��ȯ���� %d�� �����Ѵ�.
	// ���� �� ����� break�� �ɾ� ����� ���� ������ ���δ�.
	int n, sum, i;

	printf("�Է� : ");
	scanf("%d", &n);

	switch (n) {
		case 1: printf("%d\n", n); break;
		case 2:printf("%d\n", n + 1); break;
		case 3:printf("%d\n", n + 2); break;
		default:printf("��������!");
	}

	// 2�� - ����, ���, 0 �����ϱ�
	// if - else if - else �߿��� if�� else�� ���� �Ѱ��� �� �� �ִ�.

	if (n > 0)
		printf("���");
	else if (n < 0)
		printf("����");
	else
		printf("0");

	// 3�� - 1 ~ 10�� �� sum ���ϱ�
	// for�� �������� i�� �� ��ü�� ��ȭ�� �־���Ѵ�. ���� i + 1�� �ƴ� i += 1 Ȥ�� i++�� �ۼ��ؾ� �Ѵ�.
	sum = 0;
	for (i = 1; i <= 10; i ++)
		sum = sum + i;

	return 0;
}