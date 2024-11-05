#include <stdio.h>
#define L 5		// 면 개수를 매크로 상수로 정의
#define M 5		// 행 개수를 매크로 상수로 정의
#define N 7		// 열 개수를 매크로 상수로 정의

int main() {
	//1부터 5까지의 정수를 확대한 텍스트 그래픽을 3차원 배열의 각 면에 저장하기
	char no[L][M][N] = { {"　■　", "■■　", "　■　","　■　","　■　"},  {"■■■", "　　■", "■■■", "■　　", "■■■"},
						 {"■■■", "　　■", "■■■","　　■","■■■"},  {"■　■", "■　■", "■■■", "　　■", "　　■"},
						 {"■■■", "■　　", "■■■","　　■","■■■"} };
	int i, n;

	printf("1~5 중에서 크게 출력하고 싶은 점수를 입력하세요 : ");
	scanf("%d", &n);

	// 확대 문자가 저장된 며늘 출력하기
	for (i = 0; i < M; i++)
		printf(" %s\n", no[n - 1][i]);

	return 0;
}