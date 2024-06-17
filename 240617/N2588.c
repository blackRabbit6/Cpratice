#include <stdio.h>

int main() {
	int a;
	int b;
	scanf_s("%d", &a);
	scanf_s("%d\n", &b);
	//472, 385
	printf("%d\n", a * (b % 10)); // 385%10=5->472*5
	printf("%d\n", a * ((b / 10) % 10));// ->b/10=38%10=8->472*8
	printf("%d\n", a * (b / 100));// 385/100=3 -> 472*3
	printf("%d\n", a * b);// 472*385
	
	return 0;
}