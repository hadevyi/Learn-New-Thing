#include <stdio.h>

int main() {
	int num, i, check = 1; // if check is 1, number is prime

	printf("���� ���� n : ");
	scanf("%d", &num);

	if (num <= 0) printf("���� ������ Ȯ�� �����մϴ�.");
	else {
		if (num <= 3) printf("%d��(��) �Ҽ��Դϴ�.\n", num);
		else {
			for (i = 2; i < num; i++) {
				if (num % i == 0)
					check = 0;
			}

			if (check == 0) printf("%d��(��) �Ҽ��� �ƴմϴ�.\n", num);
			else printf("%d��(��) �Ҽ��Դϴ�.\n", num);
		}
	}

	return 0;
}