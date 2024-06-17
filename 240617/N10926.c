#include <stdio.h>

int main() {
	char a[100];
	/*scanf_s("%s", &a);*/
	/*함수는 vc++ 에서만 지원이 됩니다.
	g++ 나 clang 은 지원하지 않는 함수이죠.
	scanf_s() 에서 문자 또는 문자열은 길이를 같이 지정해 주어야 합니다.*/
	scanf_s("%s", &a,100);
	/*삼중자 시퀀스*/
	printf("%s?\?!", a);
	return 0;
}
