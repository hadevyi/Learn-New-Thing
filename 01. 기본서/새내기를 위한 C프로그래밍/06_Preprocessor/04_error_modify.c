#include <stdio.h>
#define MULT(x, y) x*y
#define MSG "�ȳ��ϼ���?" // �ȳ��ϼ���? ��� �ۼ��ϸ� string���� �ν����� ���ϰԵ˴ϴ�.

int main() {
	int a = 1, b = 2;
	printf("%s\n", MSG);
	printf("%d\n", MULT(2 + a, b));

	return 0;
}