#include <stdio.h>

void main() {
	char number;
	double batting_avg;
	int age;

	printf("�� ��ȣ�� �Է��ϼ��� :");
	scanf_s("%c", &number); // ���� 3�� �Է�, %d�̸� ���ڷ� ��

	printf("Ÿ���� �Է��ϼ��� : ");
	scanf_s("%lf", &batting_avg); //��ĭ

	printf("���̸� �Է��ϼ��� :");
	scanf_s("%d", &age);

	
	printf("%d�� ������ Ÿ���� %lf�̰� ���̴� %d�� �Դϴ�.\n", number, batting_avg, age);
}

