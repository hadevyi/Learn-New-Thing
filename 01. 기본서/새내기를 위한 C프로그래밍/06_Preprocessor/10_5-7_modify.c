#include <stdio.h>
#define MALE 1
#define YES 1

int main(void) {
	int gender, married, army, plus = 0, children;

	printf("���� (��:1, ��:2) ? ");
	scanf_s("%d", &gender);

	if (gender == MALE) {
		printf("�� ���� (��:1, �ƴϿ�:2) ? ");
		scanf_s("%d", &army);

		if (army == YES) {
			plus++;

			printf("��ȥ (��:1, �ƴϿ�:2) ? ");
			scanf_s("%d", &married);
			if (married == YES)
				plus++;

		}
	}
	else {
		printf("��ȥ (��:1, �ƴϿ�:2) ? ");
		scanf_s("%d", &married);
		if (married == YES) {
			plus++;

			printf("�ڳ����? ");
			scanf_s("%d", &children);
			if (children == 1)
				plus++;
			else if (children >= 2)
				plus += 2;
		}
	}

	printf("\n>> �� �������� %d���Դϴ�.", plus);

	return 0;
}