#include <stdio.h>

void main(void){
	double cm, kg, feet = 30.48, lb = 2.20459, average;

	printf("Ű(cm)�� �Է��ϼ���. ");
	scanf("%lf", &cm);

	printf("������(kg)�� �Է��ϼ���. ");
	scanf("%lf", &kg);

	average = (cm - 100)*0.9;

	printf("\n����� Ű�� %.1lfcm(%.1lffeet)�Դϴ�.\n", cm, cm / feet);
	printf("����� ü���� %.1lfkg(%.1lflb)�Դϴ�.\n", kg, kg / lb);
	printf("ǥ�� ü�� %.1lf���� ���̴� %+.1lfkg�Դϴ�.\n", average, kg - average);
}