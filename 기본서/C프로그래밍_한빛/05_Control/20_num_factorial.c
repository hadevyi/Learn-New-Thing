#include <stdio.h>

int main() {
	int num, total = 1;

	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%d", &num);

	if (num < 0)
		printf("������ �Ұ����մϴ�.\n");
	else if (num == 0)
		total = 1;
	else {
		for (int i = 1; i <= num; i++) {
			total *= i;
		}
	}

	printf("%d! = %d\n", num, total);

	return 0;
}