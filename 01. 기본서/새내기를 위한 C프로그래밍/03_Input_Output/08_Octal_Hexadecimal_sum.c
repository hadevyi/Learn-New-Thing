#include <stdio.h>

void main(void){
	int eight, sixteen, sum;

	printf("8���� 16������ ������� �Է��ϼ���. : ");
	scanf("%o %x", &eight, &sixteen);

	sum = eight + sixteen;

	printf("%o(8) + %x(16) = %d\n", eight, sixteen, sum);
}