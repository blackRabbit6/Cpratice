#include <stdio.h>

int main() {
	/*int A;
	int B;
	scanf_s("%d\n", &A);
	scanf_s("%d\n", &B);
	double result = A / B;
	printf("%lf", result);*/
	//�� �ڵ�� Ʋ��
	// �Ҽ� 9��°���� ������ ���� ����
	//int->double ��ȯ ����
	//����
	int A;
	int B;
	scanf_s("%d\n", &A);
	scanf_s("%d\n", &B);
	double result = (double)A / (double)B;
	printf("%.9lf", result);

	return 0;
}