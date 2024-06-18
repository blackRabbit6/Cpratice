#include <stdio.h>

int main() {

	/*같은 눈이 3개가 나오면 10, 000원 + (같은 눈)×1, 000원의 상금을 받게 된다.
	같은 눈이 2개만 나오는 경우에는 1, 000원 + (같은 눈)×100원의 상금을 받게 된다.
	모두 다른 눈이 나오는 경우에는(그 중 가장 큰 눈)×100원의 상금을 받게 된다.*/

	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);

	if (a == b && b == c && c == a) {
		printf("%d", 10000 + (a * 1000));
	}
	else if (a == b || b == c) {
		printf("%d", 1000 + (b * 100));
	}
	else if (c == a) {
		printf("%d", 1000 + (a * 100));
	}
	else if (a > b && a > c) {
		printf("%d", a * 100);
	}
	else if (b > c && b > a) {
		printf("%d", b * 100);
	}
	else {
		printf("%d", c * 100);
	}
	

	return 0;
}