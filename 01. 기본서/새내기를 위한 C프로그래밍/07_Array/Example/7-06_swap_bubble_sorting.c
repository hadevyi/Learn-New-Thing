#include <stdio.h>
#define SIZE 5

int main() {
	int i, repeat, temp, a[SIZE] = { 1, 2, 3, 5, 4 };
	char swap;		// �̿� �� ������ ���� ��ȯ�� ���� �ִ� ���� �˷��ִ� ����

	// �����ϱ� �� ������ �迭 ������ ����ϱ�
	printf("���� �� �迭 : ");
	for (i = 0; i < SIZE; i++)
		printf("%4d", a[i]);

	// ���� ���� ����
	for (repeat = 1; repeat < SIZE; repeat++) {	
		swap = 'N';		// �� ���� ���� ��ȯ�� �߻����� ���� ���·� �ʱ�ȭ
		for (i = 0; i < SIZE - 1; i++) {
			if (a[i] > a[i + 1]) {
				temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;

				swap = 'Y';		// �� ���� ���� ��ȯ�� �߻��� ���·� ����
			}
		}

		if (swap == 'N')			// �� ���� ���� ��ȯ�� �߻��� ���� ���� ���� �Ϸ� ���¶��
			break;					// ���� �۾��� ������
	}

	// ���ĵ� ����� ����ϱ�
	printf("\n\n���� �� �迭 : ");
	for (i = 0; i < SIZE; i++)
		printf("%4d", a[i]);
	printf("\n");

	return 0;
}