#include <stdio.h>

int main() {
	int x, y, result;
	char op;

	printf("������ �Է��Ͻÿ�\n");
	printf("�������� ���� : + - * / %% & | ^\n");
	printf("�Է� �� : 2 + 3\n\n�Է� >> ");
	scanf("%d %c %d", &x, &op, &y);

	if (op == '+')
		result = x + y;
	else if (op == '-')
		result = x - y;
	else if (op == '*')
		result = x * y;
	else if (op == '/')
		result = x / y;
	else if (op == '%')
		result = x % y;
	else if (op == '&')
		result = x & y;
	else if (op == '|')
		result = x | y;
	else if (op == '^')
		result = x ^ y;
	else {
		printf("�߸��� �������Դϴ�.\n");
		exit(0);
	}

	printf("\n��� >> %d %c %d = %d\n", x, op, y, result);

	return 0;
}