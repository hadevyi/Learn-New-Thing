#include <stdio.h>

int main()
{
	char x = 'a';
	int y;
	double z = 1.234;

	printf("y �Է� : ");
	scanf("%d", &y);					// &�� �ּҿ�����

	printf("���� y�� �� = %d\n", y);
	printf("���� y�� �ּ� = %p\n", &y);	// &�� �ּҿ�����
	printf("\n");

	y = (y = 3, y + 5);					// �޸� ������
	printf("y = %d\n", y);
	printf("char�� ���� x�� ũ�� = %d\n", sizeof x);	// sizeof ������
	printf("int�� ���� y�� ũ�� = %d\n", sizeof y);
	printf("double�� ���� z�� ũ�� = %d\n", sizeof(z));
	printf("float���� ũ�� = %d\n", sizeof(float));

	return 0;
}