
#include <stdio.h>

int main() {
	int i, n, cnt, sum;

	sum = 0;	// �� �հ�
	cnt = 1;	// �Էµ� ���� ���� ����

	for (i = 1; cnt <= 5; i++) {
		printf("\n���� ���� n�� �Է��ϼ���. >> ");
		scanf("%d", &n);	// ���� ���� 5���� �Է¹��� ������ �ݺ�

		if (n <= 0)
			continue;		// ����� ���ϱ� ���� 0 ���ϸ� ���� �� �ݺ����� �����ϱ�

		cnt++;
		printf("���ݱ����� �� %2d + %2d = ", sum, n);
		sum += n;
		printf("%2d \n", sum);
	}

	return 0;
}
