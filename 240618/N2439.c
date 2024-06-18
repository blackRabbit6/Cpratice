#include <stdio.h>

int main() {

	int N;
	printf("N = ");
	scanf_s("%d", &N);

	for (int i = 1; i <= N; i++) {
		for (int k = N; k > i; k--) {
			printf(" ");
		}
		for (int j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}