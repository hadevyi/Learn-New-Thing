#include <stdio.h>

int main(){
	int num, left, right;

	printf("���� �Է� : ");
	scanf("%d", &num);

	left = num >> 3;
	right = num << 3;

	printf("%d >> 3 = %d\n", num, left);
	printf("%d << 3 = %d\n", num, right);

	return 0;
}