#include <stdio.h>

int main()
{
	int age;
	char gender;
	double height;

	// �ڷ� �Է� �ޱ�
	printf("���̴�? ");
	scanf("%d", &age);
	printf("Ű��? ");
	scanf("%lf", &height);
	printf("������? (���ڶ�� M ���ڶ�� F) ");
	
	getchar();			
	// ����� 10���� ���� ���ʹ� fflush(stdin);���� ���� ������ ��Ȱ���� �ʴ�. 
	//���� getchar()�� ���۸� �����ش�.
	
	gender = getchar();	// scanf("%c", &gender);

	// ��� ����ϱ�
	printf("\n====================\n");
	printf("���� : %c\n", gender);
	printf("���� : %d��\n", age);
	printf("Ű : %.1lfcm\n", height);

	return 0;
}