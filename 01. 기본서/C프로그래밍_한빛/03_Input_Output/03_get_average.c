#include <stdio.h>

/*
//���� �� �ҽ�
int main(){
	int op1 = 10, op2 = -20, sum;

	printf(' ���� ���� ������? ');
	scanf("%d %d ", kor, music);

	double ave;
	ave = kor + music / 2.0;

	printf("=========================================\n");
	printf("����              ����               ���\n");
	printf("-----------------------------------------\n");
	printf("%3d           %3d              %d \n", kor, music, ave);
	printf("=========================================\n");

	return 0;
}
*/


//���� �� �ҽ�
int main(){
	int kor, music;
	double ave;

	printf(" ���� ���� ������? ");
	scanf("%d %d", &kor, &music);

	ave = (kor + music) / 2.0;

	printf("=========================================\n");
	printf(" ����         ����             ���\n");
	printf("-----------------------------------------\n");
	printf(" %3d          %3d              %.1lf \n", kor, music, ave);
	printf("=========================================\n");

	return 0;
}
