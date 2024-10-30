#include <stdio.h>
#include <string.h>				// strlen, strcpy �Լ��� ���� ��� ����
#include <stdlib.h>				// malloc, free, exit �Լ��� ���� ��� ����

struct book_info {				// ����ü ����
	int year;					// ���� �⵵
	char *title;				// ������
};
typedef struct book_info BOOK;	// �ڷ��� ������

int main() {
	BOOK *books;				// ���� ������ ������ ���� �迭�� ����ų ������
	int size, i;				// ������ �Է¹��� ���� �Ǽ�
	char temp[101];				// �Էµ� �������� ������ �ӽ� �����

	do {						// ���� �Ǽ� �Է�(1 �̻��� �� �Է¹ޱ�)
		printf("������ �Է��� ���� �Ǽ� : ");
		scanf("%d", &size);

		if (size <= 0)
			printf("���� : �Ǽ��� �� �� �Է��Ͽ����ϴ�. �ٽ� �Է��ϼ���. ");
	} while (size <= 0);

	// ���� �Ǽ���ŭ ������ ������ ������ �Ҵ�ޱ�
	books = (BOOK*)malloc(sizeof(BOOK)*size);				// ����ü �迭�� ���� ���� �Ҵ�

	if (books == NULL) {
		puts("���� ������ �Ҵ翡 �����Ͽ����ϴ�.\n");
		exit(1);				// ���α׷� ���� �ߴ�
	}

	// size���� ���� ���� �Է�
	for (i = 0; i < size; i++) {
		printf("%d) ���� �̸� : ", i + 1);
		getchar();
		gets(temp);				// �������� �ӽ÷� temp �迭�� �Է¹ޱ�

		//���ڿ��� ���� ���� �Ҵ�
		books[i].title = (char*)malloc(sizeof(char)*(strlen(temp) + 1));

		if (books[i].title == NULL) {
			puts("���� ������ �Ҵ翡 �����Ͽ����ϴ�.\n");
			exit(1);			// ���α׷� ���� �ߴ�
		}

		//�ӽ� ����ҿ� �Է��� �������� ���� title ����� �����ϱ�
		strcpy(books[i].title, temp);
	}

	// books �迭�� ����� size���� ���� ���� ���
	printf("\n >> ���� ���� ��� <<\n");
	printf("\n ���� ������ ���ǳ⵵");
	printf("\n============================================\n");
	for (i = 0; i < size; i++)
		printf("%3d &-12s %4d\n", i + 1, books[i].title, books[i].year);
	printf("============================================\n");

	// char�� �迭 ��� title�� �Ҵ�� ���� ������ �����ϱ�
	for (i = 0; i < size; i++)
		free(books[i].title);
	free(books);				// ����ü �迭�� ���� ���� �Ҵ� ������ ����

	return 0;
}