#include <stdio.h>

int main(){
	double radius, height, volume, pi = 3.141592;

	printf("������� �ظ��� ������, ���̸� �Է��ϼ���(cm ����) : ");
	scanf("%lf,%lf", &radius, &height);

	volume = pi*radius*radius*height;

	printf(">> ����� ������� ���Ǵ� %.1lfcm���Դϴ�.\n", volume);

	return 0;
}