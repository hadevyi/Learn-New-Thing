#include <stdio.h>
#define LEVEL 3

int main() {
	#ifdef LEVEL
		#if (LEVEL >= 2)
			printf("����ڿ� ���α׷�\n");
		#else
			printf("�߱��ڿ� ���α׷�\n");
	#else
		pirntf("�ʱ��ڿ� ���α׷�\n");
	#endif

	return 0;
}

// Error : ���� #if/#endif ���� ¦�� ���� �ʽ��ϴ�.