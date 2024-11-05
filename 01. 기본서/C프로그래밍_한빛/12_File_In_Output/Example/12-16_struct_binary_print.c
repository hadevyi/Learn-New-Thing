#include <stdio.h>														// fwrite, ffloush �Լ��� ���� ��� ����
#include <stdlib.h>														// exit �Լ��� ���� ��� ����
#define SIZE 3															// ������ �Է��� ����� ��

struct person {															// ����ü ����
	char name[7], gender[3];											// �̸�, ����
	int age;															// ����
};
typedef struct person PERSON;											// �ڷ��� ������

int main() {
	int i;
	PERSON user;														// ����� ������ ������ ����ü ���� ����
	FILE *fp = fopen("user.bin", "rb");									// �б� ���� ���� ���� ����

	if (fp == NULL) {													// ���� ���� ���� ó��
		printf("���� ���� ����!\n");
		exit(1);
	}

	puts("-----------------------------------------------------");
	puts("  �̸�   ����  ����");
	puts("-----------------------------------------------------");

	// ���Ͽ��� ��� 1���� ����� �о��ٸ� ��� �ݺ��ϱ�
	while (fread(&user, sizeof(PERSON), 1, fp) == 1)
		printf(" %-8s %-3s %4d\n", user.name, user.gender, user.age);

	puts("-----------------------------------------------------");
	fclose(fp);															// ���� �ݱ�

	return 0;
}