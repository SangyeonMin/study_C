#include <stdio.h>

void main() {
	char number;


	// %c �� �Է¹ް� %c�� ��½�
	printf("�� ��ȣ�� �Է��ϼ��� :");
	scanf_s("%c", &number); // ���� 3�� �Է�
	printf("%c�� �����Դϴ�.\n", number); //���(����) : 3

	// %c �� �Է¹ް� %d�� ��½�
	printf("�� ��ȣ�� �Է��ϼ��� :");
	scanf_s("%c", &number); // ���� 3�� �Է�
	printf("%d�� �����Դϴ�.\n", number);//���(ASCII�ڵ��� 10����) : 51
}