#include <stdio.h>

void main(void){
	int cm;
	double circumference, area, volume;
	double pi = 3.141592;

	printf("������(cm)�� �Է��ϼ���. ");
	scanf("%d", &cm);

	circumference = cm*2.0*pi;
	area = cm*cm*pi;
	volume = 4.0 / 3.0 * pi*cm*cm*cm;

	printf("�ѷ� = %7.2lfcm\n���� = %7.2lfcm��\n���� = %7.2lfcm��\n", circumference, area, volume);
}