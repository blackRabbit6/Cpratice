#include <stdio.h>

int main() {
	//A,B -> 시,분
	//C ->작동시간
	//ex)14 30 20 -> 14 50
	//17 40 80 ->19 0
	//23 48 25 -> 0 13
	int A, B;
	scanf_s("%d %d\n", &A, &B);
	int C;
	scanf_s("%d\n", &C);
	int over = (B + C) / 60;

	if (B + C > 59) {
		if (A + over >= 24) {
			printf("%d %d", A + over - 24, (B + C) % 60);
		}
		else {
			printf("%d %d", A + over, (B + C) % 60);
		}
	}
	else {
		printf("%d %d", A, (B + C));
	}
	
	return 0;
}