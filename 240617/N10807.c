#include <stdio.h>

int main() {
	int N;
	scanf_s("%d", &N);

	/*int num[N];*/
	int num[100];
	/*���� ������ ���� ���ص��� ����*/
	/*�ּ� ó���� ���´� �ֽſ��� �ȵǾ�
	�� ���Ƿ� �迭���̸� ���� �����ؾ� �� �۵���
	�ּ�ó�� �Ѱ� ���� ���� �ʰ� �����ص� ���� ����*/
	for (int i = 0; i < N; i++) {
		scanf_s("%d", &num[i]);
	}

	int V;
	scanf_s("%d", &V);
	int count = 0;
	for (int i = 0; i < N; i++) {
		if (V == num[i]) {
			count++;
		}
	}

	printf("%d", count);
	return 0;
}