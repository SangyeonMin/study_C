#include<stdio.h>

void main() {
	int lot;

	printf("��÷ ��ȣ�� �Է��ϼ��� : ");
	scanf_s("%d", &lot);

	// switch() case ����
	switch (lot) {
	case 1 : 
		printf("�輭��\n");
		break; //switch case ���� ����������. 
	case 2 : 
		printf("ȫ����\n");
		break;
	case 3 : 
		printf("�Ȼ��\n");
		break;
	default : 
		printf("��÷�ڰ� �����ϴ�!\n");//�� ���� ��
	}

}