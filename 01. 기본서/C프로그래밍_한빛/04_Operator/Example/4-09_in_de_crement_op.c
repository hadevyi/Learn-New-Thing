#include <stdio.h>

int main()
{
	int x = 1, y = 2, z = 3;

	x = ++x * 5;	// �������̹Ƿ�
	y = y++ * 5;	// �������̹Ƿ�
	z = 5 - --z;	// �������̹Ƿ�

	printf("x = %d\n", x);
	printf("y = %d\n", y);
	printf("z = %d\n", z);

	return 0;
}