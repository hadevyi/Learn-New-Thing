#include <stdio.h>
#define NUMBER(x) printf("\t\t%4o\t%4d\t%4x\n", x, x, x);

int main(void) {
	int n;

	printf("���� �Է� : ");
	scanf("%d", &n);

	printf(">> ��� : \t8���� 10����  16����\n");
	NUMBER(n);

	return 0;
}