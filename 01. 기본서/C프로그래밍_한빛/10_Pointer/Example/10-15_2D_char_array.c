#include <stdio.h>
#include <string.h>						// strcmp, strcpy �Լ��� ���� ��� ����
#define SIZE 5							// �迭�� ���Ҽ�

int main() {
	char silver[SIZE][10] = { "������", "����", "������", "���ǿ�", "������" };
	char temp[10];						// ���ڿ� �� ���� �ӽ÷� ������ �迭
	int pass, i;

	printf("** ���޴� ����Ʈ : ");
	for (i = 0; i < SIZE; i++)			// ���ڿ� �� ���� �ӽ÷� ������ �迭
		printf("%s, ", silver[i]);
	printf("\b\b **\n\n");				// \b�� �̿��Ͽ� ������ �̸� ���� , �����

	// ���� ������ �̿��Ͽ� �̸��� �����ټ����� �����ϱ�
	for (pass = 1; pass < SIZE; pass++)
		for(i=0;i<SIZE;i++)
			if (strcmp(silver[i], silver[i + 1]) > 0) {
				strcpy(temp, silver[i]);
				strcpy(silver[i], silver[i + 1]);
				strcpy(silver[i + 1], temp);
			}

	printf("** ������ ����Ʈ : ");
	for (i = 0; i < SIZE; i++)			// ���� �� �迭 ���� ����ϱ�
		printf("%s, ", silver[i]);
	printf("\b\b **\n\n");				// \b�� �̿��Ͽ� ������ �̸� ���� , �����
}