#include <stdio.h>
#include <string.h>

int main() {

	char a[100];
	scanf_s("%s", a);
	// ���ڿ� ���� �˾Ƴ��� �� ->strlen() �Լ� �̿�
	// +#include <string.h> ��� ���� �߰��ؾߵ�
	int len = strlen(a);
	printf("%d\n", len);

	return 0;
}
// �ٵ� ���� �����ε� visual studio 2022���� �ȵ���?
