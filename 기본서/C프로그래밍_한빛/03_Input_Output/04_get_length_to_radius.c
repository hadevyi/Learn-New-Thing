#include <stdio.h>

/*
//���� �� �ҽ�
int main(){
	int r = 5;
	double length;

	length = 2 * 3.14*r;

	printf("�ѷ��� ���� ���� ��������? ");
	scanf("%d", &r);
	printf("�������� %d�� ���� �ѷ��� %.2lf \n", r, length);

	return 0;
}
*/

//���� �� �ҽ�
int main(){
	int r = 5;
	double length = 0;

	printf("�ѷ��� ���� ���� ��������? ");
	scanf("%d", &r);

	length = 2 * 3.14*r;

	printf("�������� %d�� ���� �ѷ��� %.2lf \n", r, length);

	return 0;
}
