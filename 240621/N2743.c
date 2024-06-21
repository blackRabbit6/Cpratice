#include <stdio.h>
#include <string.h>

int main() {

	char a[100];
	scanf_s("%s", a);
	// 문자열 길이 알아내는 법 ->strlen() 함수 이용
	// +#include <string.h> 헤더 파일 추가해야됨
	int len = strlen(a);
	printf("%d\n", len);

	return 0;
}
// 근데 백준 정답인데 visual studio 2022에선 안되지?
