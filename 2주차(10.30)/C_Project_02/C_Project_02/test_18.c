#include <stdio.h>

void main() {
	char number;
	double batting_avg;
	int age;
	char name[80], position[80];

	printf("���ȣ�� �Է��ϼ��� : ");
	scanf_s("%c",&number); 
	printf("�̸��� �Է��ϼ��� : ");
	scanf_s("%s", name, 80 ); // ���ڿ��� %s
	printf("�������� �Է��ϼ��� : ");
	scanf_s("%s", position, sizeof(position));
	printf("Ÿ���� �Է��ϼ��� : ");
	scanf_s("%lf", &batting_avg);
	printf("���̸� �Է·��ϼ��� :");
	scanf_s("%d", &age);

	printf("%c��-%s-%s, Ÿ���� %lf�̰� ���̴� %d���Դϴ�\n",
		number, name, position, batting_avg, age);

}