#include <stdio.h>

int main() {
	int score;

	printf("���� �Է��ϱ� : ");
	scanf("%d", &score);

	// �ùٸ� if��
	if (score <= 70)
		printf("��");
	else if (score <= 90)
		printf("��");
	else
		printf("��");

	// �߸��� if��
	if (score <= 70)
		printf("��");
	if (score <= 90)
		printf("��");
	if (score <= 100)
		printf("��");

	/*
	if - else if - else�� �ϳ��� ��Ʈ�� �ռ� �Ǵ��� ������ ���ؼ��� �����Ѵ�.
	������ ���� �ٸ� if�� �Ź� �ٸ� ������ Ȯ���ϱ⿡ �ߺ��� ����� ���� �� �ִ�.
	*/

	return 0;
}