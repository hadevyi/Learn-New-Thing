#include <stdio.h>

int main(){
	int time, sec, min, hour;

	printf("��(sec)�Է� : ");
	scanf("%d", &time);

	hour = time / (60 * 60);
	min = (time / 60) - (hour * 60);
	sec = time % 60;

	printf(">> �Է��� %d�ʴ� %d�ð� %d�� %d���Դϴ�.\n", time, hour, min, sec);

	return 0;
}