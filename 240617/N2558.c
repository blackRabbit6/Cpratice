#include <stdio.h>

int main() {
//45�� �̸� �ð����� �˶� �︮��
//10:10-> 9:25
//0:30-> 23:45
//23:40->22:55
//(0 �� H �� 23, 0 �� M �� 59)
	int H, M;
	scanf_s("%d %d\n", &H, &M);
	if ((M - 45) < 0) {
		if (H == 0) {
			printf("%d %d", H + 23, M + 15);
		}
		else {
			printf("%d %d", H - 1, M + 15);
		}
	}
	else {
		printf("%d %d", H, M - 45);
	}
	return 0;
}