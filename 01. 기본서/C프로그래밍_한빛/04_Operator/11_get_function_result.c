#include <stdio.h>

int main(){
	int x;
	double result;

	printf("x�Է� : ");
	scanf("%d", &x);

	result = (2 * x*x*x) - (3 * x*x) + (1 / (double)x);

	printf("   -> x = %d�� ��\n      f(x) = 2x��-3x��+1/x = %.1lf\n", x, result);

	return 0;
}