#include <stdio.h>

int main() {
	/*long long �� ����
	int�� ���� ���� ������ �� �� �ֱ⿡ ū long long�� �����
	int 4����Ʈ, long long 8����Ʈ*/
	long long a, b;
	long long diff;

	scanf_s("%lld %lld", &a, &b);
	diff = a >= b ? a - b : b - a;
	//���� ������(���� ������) ����ؾߵ�
	//(���� ? ���� �� �� : ������ �� ��;)

	printf("%lld\n", diff);
	
	return 0;
}