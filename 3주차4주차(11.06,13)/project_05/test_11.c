#include<stdio.h>

void main() {
	double weight, height;
	double bmi;

	printf("�����Ը� �Է��ϼ���(kg):");
	scanf_s("%lf", &weight);
	printf("Ű�� �Է��ϼ���(cm) :");
	scanf_s("%lf", &height); 
	height = height / 100;
	bmi = weight / (height * height);
	printf("����� BMI�� %.1lf�Դϴ�.\n", bmi);
	if (bmi>=20.0 && bmi<25.0) {  // 20 <= bmi <25 �� �ȵǴ� ���� -> ���α׷� ���� ���� (��>�Ʒ�, �¿�)
		printf("ǥ�� ü���Դϴ�."); //20�̻� 25�̸�
	}
	else {
		printf("ü�� ������ �ʿ��մϴ�.");
	}
}