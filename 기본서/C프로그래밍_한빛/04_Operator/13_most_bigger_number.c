#include <stdio.h>

int main(){
	int a, b, c, max;

	printf("�� ���� ���� : ");
	scanf("%d %d %d", &a, &b, &c);

	max = a > b ? a : b;
	max = c > max ? c : max;

	printf(">> ���� ū �� = %d\n", max);

	return 0;
}