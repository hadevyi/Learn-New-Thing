#include <stdio.h>
#define PI 3.141592
#define VOLUME(r) 4.0/3.0*PI*(r)*(r)*(r)

int main() {
	int radius;

	printf("������ : ");
	scanf("%d", &radius);

	printf(">> �������� %d�� ���� ���� = %.2lf\n", radius, VOLUME(radius));

	return 0;
}