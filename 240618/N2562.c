#include <stdio.h>

int main() {

	int a[9];
	int n = 0;
	int arrs;
	for (int i = 0; i < 9; i++) {
		//���⼭ a��� �迭�� �ʱ�ȭ �ؾߵ�
		//���ϰ� �ٸ� ������ ������⿡ ������
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