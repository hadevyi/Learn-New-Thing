#include <stdio.h>

int main() {
	int cm;
	double kg, standard_kg;

	printf("Ű : ");
	scanf("%d", &cm);

	printf("ü�� : ");
	scanf("%lf", &kg);

	standard_kg = (cm - 100) * 0.9;

	printf("����� ");
	if (standard_kg - 5 > kg) printf("��ü���Դϴ�.\n");
	else if (standard_kg + 5 < kg) printf("��ü���Դϴ�.\n");
	else printf("ǥ�� ü���Դϴ�.\n");

	return 0;
}