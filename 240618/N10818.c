//#include <stdio.h>
//
//int main() {
//
//	// 정수 갯수 입력, 정수 입력,최대,최소
//
//	int count, num, max, min;
//	max = -100000;
//	min = 100000;
//
//	scanf_s("%d", &count);
//	for (int i = 0; i < count; i++) {
//		scanf_s("%d", &num);
//		if (num > max) {
//			max = num;
//		}
//		if (num < min) {
//			min = num;
//		}
//	}
//
//	printf("%d %d", min, max);
//	return 0;
//}


#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	int min = 1000000;
	int max = -1000000;
	for (int i = 0; i < N; i++) {
		int n;
		scanf("%d", &n);
		if (max < n) {
			max = n;
		}
		if (min > n) {
			min = n;
		}
	}
	printf("%d %d", min, max);
	return 0;
}