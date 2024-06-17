#include <stdio.h>

int main() {
	/*int a; int b; int c;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	int result = a + b + c;
	printf("%d", result);*/
	//틀린 이유
	//문제에서 보면 int형 초과함
	//long long 형으로 받으며 %lld로 받아야됨
	long long a, b, c;
	scanf_s("%lld %lld %lld", &a, &b, &c);
	long long result = a + b + c;
	printf("%lld", result);
	return 0;
}