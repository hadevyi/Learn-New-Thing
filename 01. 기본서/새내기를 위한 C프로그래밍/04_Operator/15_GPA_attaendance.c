#include <stdio.h>

int main(){
	char name[10];
	int language, english, math, attendance;
	double average;

	printf("�л��� �̸� : "); gets(name);
	printf("���� : "); scanf("%d", &language);
	printf("���� : "); scanf("%d", &english);
	printf("���� : "); scanf("%d", &math);
	printf("��� : "); scanf("%d", &attendance);

	average = (language + english + math + attendance) / 4.0;

	printf("-------------------------------------------\n");
	printf("\t[%s] �л� >> ", name);
	(average >= 70) && (attendance >= 80) ? printf("�հ�\n") : printf("���հ�\n");
	printf("-------------------------------------------\n");
	printf("\t�� ������ ��� : %.1lf\n", average);
	printf("\t��� ����      : %d\n", attendance);
	printf("-------------------------------------------\n");

	return 0;
}