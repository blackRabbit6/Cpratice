#include <stdio.h>

int main() {
	/*long long 쓴 이유
	int를 쓰면 범위 에러가 날 수 있기에 큰 long long을 사용함
	int 4바이트, long long 8바이트*/
	long long a, b;
	long long diff;

	scanf_s("%lld %lld", &a, &b);
	diff = a >= b ? a - b : b - a;
	//조건 연산자(삼항 연산자) 사용해야됨
	//(조건 ? 참일 때 값 : 거짓일 때 값;)

	printf("%lld\n", diff);
	
	return 0;
}