#include <stdio.h>

int main() {
	int N;
	scanf_s("%d", &N);

	/*int num[N];*/
	int num[100];
	/*아직 문제에 대한 이해도가 낮음*/
	/*주석 처리한 형태는 최신에선 안되어
	걍 임의로 배열길이를 직접 조정해야 잘 작동됨
	주석처리 한걸 실행 하지 않고 제출해도 답은 맞음*/
	for (int i = 0; i < N; i++) {
		scanf_s("%d", &num[i]);
	}

	int V;
	scanf_s("%d", &V);
	int count = 0;
	for (int i = 0; i < N; i++) {
		if (V == num[i]) {
			count++;
		}
	}

	printf("%d", count);
	return 0;
}