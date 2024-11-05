#include <stdio.h>						// fopen, fscanf, fclose, feof �Լ��� ���� ��� ����
#include <stdlib.h>						// exit �Լ��� ���� ��� ����

int main() {
	FILE *fp;							// ���� ������ ����
	int age;

	fp = fopen("age.txt", "r");			// ������ �б���� ������

	if (fp == NULL) {					// ���� ���� ���� ó��
		printf("���� ���� ����!");
		exit(1);
	}

	// ���Ͽ� ����� ��� ���̸� �о ����Ϳ� ����ϱ�
	fscanf(fp, "%d", &age);			// ���Ͽ��� ������ �о� age�� �����ϱ�
	while (!feof(fp)) {					// ������ ���� ������ �ʾҴٸ� �ݺ� ����
		printf("%2d\n", age);			// ���Ͽ��� ���� age�� ����ͷ� ����ϱ�
		fscanf(fp, "%d", &age);			// ���Ͽ��� ������ �о� age�� �����ϱ�
	}

	fclose(fp);							// fp�� ����� ���� �ݱ�

	return 0;
}