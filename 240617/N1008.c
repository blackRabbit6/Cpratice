#include <stdio.h>

int main() {
	/*int A;
	int B;
	scanf_s("%d\n", &A);
	scanf_s("%d\n", &B);
	double result = A / B;
	printf("%lf", result);*/
	//이 코드는 틀림
	// 소수 9번째까지 내리는 형식 안함
	//int->double 변환 안함
	//정답
	int A;
	int B;
	scanf_s("%d\n", &A);
	scanf_s("%d\n", &B);
	double result = (double)A / (double)B;
	printf("%.9lf", result);

	return 0;
}