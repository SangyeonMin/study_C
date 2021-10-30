#include <stdio.h>

void main() {
	// 연산시 피연사자의 형태는 같아야 하며 그 결과도 같은 형태가 된다.
	double num1 = 245; // 값 : 245.000000
	int num2 = 3.1415; // 값 : 3
	int num3 = 129; // int(4byte) : -1247483648 ~ 2147483647
	char ch1 = num3; // char(1byte) : -128~127 
	unsigned char ch2 = num3; // unsigned char : 0~255

	printf("정수 245를 실수로 : %lf\n", num1); // 결과 : 245.000000
	printf("실수 3.1415를 정수로 : %d\n", num2); // 결과 : 3
	printf("정수 129를 ch1로 : %d\n", ch1);// 결과 : -127
	printf("정수 129를 ch2로 : %d\n", ch2);// 결과 : 129
	printf("%c", ch2); // 결과 -65값은 문자로
}