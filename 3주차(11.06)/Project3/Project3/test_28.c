#include <stdio.h>

void main() {
	printf("10���� ��� 12 :%d\n", 12); //12
	printf("8���� ��� 014 :%d\n", 014); // 12
	printf("16���� ��� 0xc:%d\n", 0xc); // 12

	printf("10���� 12�� 10������ ���:%d\n", 12); // decimal, 12
	printf("10���� 12�� 8������ ���:%o\n", 12); // octal, 14
	printf("10���� 12�� 16������ ���:%x\n", 12); // hexa-decimal, c


	printf("10���� 12�� 8������ ���:%#o\n", 12); //  014
	printf("10���� 12�� 16������ ���:%#x\n", 12); // 0xc




}