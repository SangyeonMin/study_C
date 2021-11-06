#include <stdio.h>

void main() {
	printf("10진수 상수 12 :%d\n", 12); //12
	printf("8진수 상수 014 :%d\n", 014); // 12
	printf("16진수 상수 0xc:%d\n", 0xc); // 12

	printf("10진수 12를 10진수로 출력:%d\n", 12); // decimal, 12
	printf("10진수 12를 8진수로 출력:%o\n", 12); // octal, 14
	printf("10진수 12를 16진수로 출력:%x\n", 12); // hexa-decimal, c


	printf("10진수 12를 8진수로 출력:%#o\n", 12); //  014
	printf("10진수 12를 16진수로 출력:%#x\n", 12); // 0xc




}