#include <stdio.h>

void main() {
	// Ű����� ���� ���� �޾ƿ���
	int num1;
	int num2;
	int num3;

	printf("������ �ϳ��� �Է��Ͻÿ� : ");
	scanf_s("%d", &num1); //Ű����� ���� ���� �Է¹ޱ� ���� �ʿ��� �Լ� 
						 // ��Ģ : scanf_s("�Է¹��� �� Ÿ��",&������(�������));
	printf("�Է� ���� �������� %d �Դϴ�.\n", num1);
	printf("������ �ΰ��� �Է��Ͻÿ� : ");
	scanf_s("%d%d", &num1, &num2); 	//���� �����ؼ� �Է� �Ҷ��� �������� ����(�����̽���)
	num3 = num1 + num2;
	printf("�Է� ���� �������� num1=%d num2=%d num3=%d", num1, num2, num3);

}