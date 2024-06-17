#include <stdio.h>

int main() {
	int A;
	int B;
	scanf_s("%d\n", &A);
	scanf_s("%d\n", &B);
	int result1 = A + B;
	printf("%d\n", result1);
	int result2 = A - B;
	printf("%d\n", result2);
	int result3 = A * B;
	printf("%d\n", result3);
	int result4 = A / B;
	printf("%d\n", result4);
	int result5 = A % B;
	printf("%d\n", result5);
	return 0;
}