#include <stdio.h>

int main() {
	int i;

	// ���� for��
	for (i = 1; i <= 10; i += 3) {
		if (i % 5 == 0)
			printf("%d\n", i);
	}

	// ���� ��� while��
	i = 1;

	while (i <= 10) {
		if (i % 5 == 0)
			printf("%d\n", i);
		i += 3;
	}

	return 0;
}