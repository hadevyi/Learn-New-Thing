#include "09_header.h"		// ����ڰ� �ۼ��� ��� ������ �����ϱ� ���� ��ó���� ������
#include <stdio.h>			// ��� ������ �����ϱ� ���� ��ó���� ������

int main() {
	int n;

	printf("�Է� : ");
	scanf("%d", &n);

	printf("%d�� ���� = %d, %d�� ������ = %d\n", n, SQUARE(n), n, CUBE(n));

	return 0;
}