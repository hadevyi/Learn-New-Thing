#include <stdio.h>

int main() {
	int i;

	// ���� while��
	i = 10;
	while (i >= 0) {
		printf("%d\n", i);
		i -= 3;
	}

	// ���� ��� for��
	for (i = 10; i >= 0; i -= 3)
		printf("%d\n", i);

	return 0;
}