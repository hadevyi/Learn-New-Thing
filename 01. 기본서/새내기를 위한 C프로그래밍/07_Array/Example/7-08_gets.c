#include <stdio.h>

int main() {
	char univaersity[11], std_no[9], name[10];	//���ڿ��� ������ �迭
	int i, j;

	// ������� ������ �Է¹ޱ�
	printf("�б�����? ");
	scanf("%s", univaersity);
	printf("�й���? ");
	scanf("%s", std_no);
	//fflush(stdin); 2015���� ���ĺ��ʹ� ������� �ʴ� �Լ��̴�.
	getchar();
	printf("�̸���? ");
	gets(name);
	printf("==============================\n");
	printf("%s %c%c�й� %s\n", univaersity, std_no[2], std_no[3], name);
	printf("==============================\n");

	return 0;
}