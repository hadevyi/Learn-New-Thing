#include <stdio.h>
#include <conio.h>		// getche �Լ��� ���� ��� ����
#define ESC 0x1b		// [Esc] Ű�� ASCII �ڵ尪�� ��ũ�� ����� ����

int main() {
	char ch, upper;

	do {
		printf("���ĺ� �ҹ��ڸ� �Է��Ͻÿ� : ");
		ch = _getche();		// Ű����� ���� �Ѱ��� �Է�

		if (ch >= 'a'&&ch <= 'z') {	// ch�� �ҹ��ڶ��
			upper = 'A' + ch - 'a';	// �ҹ��ڸ� �빮�ڷ� ����
			printf("\n��ȯ�� �빮�ڴ� %c�Դϴ�\n", upper);
		}
		else
			printf("\n");

	} while (ch != ESC);		// [Esc] Ű�� �Էµ��� �ʴ� �� �ݺ��ϱ�

	return 0;
}