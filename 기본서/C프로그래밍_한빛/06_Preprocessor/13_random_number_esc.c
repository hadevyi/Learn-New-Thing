#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#define ESC 0x1B

int main(void)
{
	char ch = 0;
	int num, min, max;

	srand((unsigned int)time(NULL));

	printf("�ּڰ�: ");
	scanf("%d", &min);
	printf("�ִ�: ");
	scanf("%d", &max);

	do
	{
		num = rand();
		if (min <= num && num <= max)
			printf("%d ", num);
		if (_kbhit())
			ch = _getch();
	} while (ch != ESC);

	return 0;
}