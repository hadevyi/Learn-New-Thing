#include <stdio.h>
#define N 5

struct person {						// ����ü ����
	char name[7], gender[3];		// �̸�, ����
	int age;						// ����
};

int main() {
	int i;
	struct person *ptr;				// ptr�� person�� ����ü�� ����Ű�� �����ͷ� ����

	// N���� ����ü ���Ҹ� ���� �迭 ����� �ʱ�ȭ
	struct person user[N] = { {"������", "��", 20}, {"������", "��", 29}, {"������", "��", 25}, {"���ǿ�", "��", 22}, {"������", "��" ,25}};

	// ptr �����Ͱ� ���ʴ�� ���� ���Ҹ� ����Ű�� �� �� ������� ���̸� �Է¹ޱ�
	ptr = user;

	for (i = 0; i < N; i++) {
		// user[i]�� age ����� ���� �Է¹ޱ�
		printf("%s�� ���̴�? ", (*ptr).name);
		scanf("%d", &(*ptr).age);

		ptr++;						// ptr�� user �迭�� ���� ���Ҹ� ����Ű�� ��. �� user[i+1]�� ����Ŵ
	}

	// ptr �����Ͱ� ���ʴ�� ���� ���Ҹ� ����Ű�� �� �� ����ü�� ������ ����ϱ�
	printf("\n  �̸�   ����  ����\n");
	printf("=========================\n");
	ptr = user;

	for (i = 0; i < N; i++) {
		// ���� ptr�� user[i]�� ����Ű�Ƿ� ptr�� �̿��Ͽ� �迭 ������ ����� ����� �� �ִ�.
		printf("%s\t%s\t%d\n", ptr->name, ptr->gender, ptr->age);
		ptr++;						// ptr�� user �迭�� ���� ���Ҹ� ����Ű�� ��
	}

	printf("=========================\n");

	return 0;
}