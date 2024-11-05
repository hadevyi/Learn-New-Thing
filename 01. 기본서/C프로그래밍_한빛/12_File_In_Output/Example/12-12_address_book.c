#include <stdio.h>															// fputs, fgets �Լ��� ���� ��� ����
#include <stdlib.h>															// exit �Լ��� ���� ��� ����
#define SIZE 5

int main() {
	char f_name[20] = "address.txt";
	char info[80];

	FILE *fp = fopen(f_name, "w");											// �ּҸ� ������ ���� ����
	int i;

	if (fp == NULL) {														// ���� ���� ���� ó��
		printf("���� ���� ����!\n");
		exit(1);
	}

	printf("�̸� ��ȭ��ȣ �ּ� �Է� �� ����Ű�� ��������. (%d��)\n", SIZE);
	for (i = 0; i < SIZE; i++) {
		printf("%d. ", i + 1);
		gets(info);															// Ű����� �� �྿ �Է¹޴´�.
		fputs(info, fp);													// �Է¹��� ���ڿ��� ���Ͽ� ����
		fputs("\n", fp);													// ���ڿ� �ڿ� ���� ���� ����
	}
	fclose(fp);																// ���� �ݱ�

	fp = fopen(f_name, "r");												// �ּҸ� ������ ���� ����

	if (fp == NULL) {														// ���� ���� ���� ó��
		printf("���� ���� ����!\n");
		exit(1);
	}

	printf("\n>> �ּҷ� ��� <<\n");
	fgets(info, 80, fp);													// ���Ͽ��� ���ڿ��� �о� info ���ڿ��� �����Ѵ�.

	while (!feof(fp)) {
		printf("%s", info);													// ���Ͽ��� ���� ���ڿ��� ����Ϳ� ����Ѵ�.
		fgets(info, 80, fp);												// ���Ͽ��� ���ڿ��� �о� info ���ڿ��� �����Ѵ�.
	}
	fclose(fp);																// ���� �ݱ�

	return 0;
}