#include <stdio.h>

int main(){
	double cm, feet, inch;

	printf("Ű(cm)�� �Է��ϼ��� : ");
	scanf("%lf", &cm);

	inch = cm / 2.54;
	feet = inch / 12.0;

	printf("�Է��Ͻ� Ű %.2lf��Ƽ���ʹ� %.2lf��Ʈ�� %.2lf��ġ�� �ش�˴ϴ�.\n", cm, feet, inch);

	return 0;
}