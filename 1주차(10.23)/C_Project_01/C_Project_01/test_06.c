#include <stdio.h>

void main() {

	int hap; //���� ����(���� ����)
	int hap2; 
	int hap3 = 200; //���� ����� ���ÿ� �� ���� 
	hap = 100;
	printf("%d", hap); //��� : 100 
	printf("\n");
	hap = 10 + 20; // ���ο� ���� ���� ���� �ִ� ���� ���
	printf("%d", hap); //��� : 30
	printf("\n");
	hap2 = hap;
	printf("%d   %d\n", hap, hap2); // ��� : 30  30 (���鵵 ���ڿ�)
	printf("%d", hap3); //��� : 200

}