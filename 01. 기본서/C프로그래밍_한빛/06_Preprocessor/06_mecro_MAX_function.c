#include <stdio.h>
#define MAX(a, b, c) (((a)>(b)) ? ((a) > (c) ? (a) : (c)) : ((b) > (c) ? (b) : (c)))

int main() {
	int a, b, c; 
	printf("a�� : "); 
	scanf_s("%d", &a); 
	printf("b�� : "); 
	scanf_s("%d", &b); 
	printf("c�� : "); 
	scanf_s("%d", &c); 
	
	printf("�Է��Ͻ� �� �߿��� ���� ū ���� %d�Դϴ�. \n", MAX(a, b, c));

	return 0;
}