#include <stdio.h>

int main() {
	char ch;

	scanf("%c", &ch);

	if (ch >= 'a' && ch <= 'z') printf("���ĺ� �ҹ����Դϴ�.\n");
	else if (ch >= 'A' && ch <= 'Z') printf("���ĺ� �빮���Դϴ�.\n");
	else if (ch >= '0' && ch <= '9') printf("�����Դϴ�.\n");
	else printf("�빮��, �ҹ���, ���� ���� �����Դϴ�.\n");

	return 0;
}