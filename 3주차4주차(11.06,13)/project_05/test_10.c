#include <stdio.h>

void main() {
	int a, b;
	int min;

	//���� ������
	printf("�� ������ �Է��ϼ���:");
	scanf_s("%d %d", &a, &b);
	min = (a < b) ? a:b ; // ���ǽ� ? ��:����;

	printf("���� ���� :%d�Դϴ�\n", min);

}