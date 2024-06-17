#include <stdio.h>

int main() {
	int A;
	int B;
	scanf_s("%d\n", &A);
	scanf_s("%d\n", &B);
	if (A > B) {
		printf(">");
	}
	else if (A < B) {
		printf("<");
	}
	else {
		printf("==");
	}
	return 0;
}