#include <stdio.h>

void main() {
	int input, change;
	int w500, w100, w50, w10;


	printf("���� �Է��ϼ��� : ");
	scanf_s("%d", &input);  // 1000

	change = input - 150;  // Ŀ�ǰ��� 150���� �� �ܵ� ��� 

	w500 = change / 500;   // [ / ������(��) ] ��� : 850/500 ==> 1  ������ 350 
	change = change % 500;  // [ % ������ ] ��� : 850 % 500 ==> 350, change = 350 ���� ���� 
	w100 = change / 100; // ��� : 350 / 100 ==> 3 ������ 50 
	change = change % 100; // ��� : 350 & 100 => 50 , change = 50 ���� ����
	w50 = change / 50; // ��� : 50 / 50 ==> 1 , ������ 0
	change = change % 50; // ��� : 50 % 50 ==> 0 , change = 0���� ����  
	w10 = change / 10;

	printf("500��¥�� ���� %d\n", w500); // 1
	printf("100��¥�� ���� %d\n", w100); // 3
	printf("50��¥�� ���� %d\n", w50); // 1 
	printf("10��¥�� ���� %d\n", w10);
}