#include <stdio.h>

void main() {
	// ����� �ǿ������� ���´� ���ƾ� �ϸ� �� ����� ���� ���°� �ȴ�.
	double num1 = 245; // �� : 245.000000
	int num2 = 3.1415; // �� : 3
	int num3 = 129; // int(4byte) : -1247483648 ~ 2147483647
	char ch1 = num3; // char(1byte) : -128~127 
	unsigned char ch2 = num3; // unsigned char : 0~255

	printf("���� 245�� �Ǽ��� : %lf\n", num1); // ��� : 245.000000
	printf("�Ǽ� 3.1415�� ������ : %d\n", num2); // ��� : 3
	printf("���� 129�� ch1�� : %d\n", ch1);// ��� : -127
	printf("���� 129�� ch2�� : %d\n", ch2);// ��� : 129
	printf("%c", ch2); // ��� -65���� ���ڷ�
}