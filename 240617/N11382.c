#include <stdio.h>

int main() {
	/*int a; int b; int c;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	int result = a + b + c;
	printf("%d", result);*/
	//Ʋ�� ����
	//�������� ���� int�� �ʰ���
	//long long ������ ������ %lld�� �޾ƾߵ�
	long long a, b, c;
	scanf_s("%lld %lld %lld", &a, &b, &c);
	long long result = a + b + c;
	printf("%lld", result);
	return 0;
}