#include <stdio.h>

void main() {
	int n = 0; 
	int sum = 0;

	printf("����� �Է��ϼ���:");
	scanf_s("%d", &n);

	while (n >= 0) {
		sum = sum + n;
		printf("���ݱ��� �Էµ� ���� �� : %d\n", sum);
		printf("����� �Է��ϼ���:");
		scanf_s("%d", &n);
	}

}