#include <stdio.h>

int main() {
	int num, n = 2, check;

	printf("�ִ� ������� �Ҽ��� ���? ");
	scanf("%d", &num);

	while (n < num) {
		check = 0;
		for (int i = 2; i < n; i++) {
			if (n%i == 0)
				check = 1;
		}

		if (check == 0) printf("%d ", n);

		n++;
	}

	return 0;
}