#include <stdio.h>

int main() {

	int a[9];
	int n = 0;
	int arrs;
	for (int i = 0; i < 9; i++) {
		//여기서 a라는 배열을 초기화 해야됨
		//안하고 다른 변수를 만들었기에 에러남
		scanf_s("%d", &a[i]);
	}
	for (int i = 0; i < 9; i++) {
		if (a[i] > n) {
			n = a[i];
			arrs = i+1;
		}
	}
	printf("%d\n", n);
	printf("%d", arrs);

	return 0;
}