#include <stdio.h>

int main() {
	int num, option;

	printf("�� �Է� : ");
	scanf("%d", &num);

	printf("����(1,2,3) : ");
	scanf("%d", option);

	switch (option)	{
		case 1 :
			printf("�Է��� �� %d�Դϴ�.", num);
			break;
		case 2 :
			printf("�Է��� �� %d�� 2����� %d�Դϴ�.", num, num * 2);
			break;
		case 3:
			printf("�Է��� �� %d�� 3����� %d�Դϴ�.", num, num * 3);
			break;
		default:
			printf("�߸��� �����Դϴ�. ������ 1~3�� �����մϴ�.");
			break;
	}

	return 0;
}