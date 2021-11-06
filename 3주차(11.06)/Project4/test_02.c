#include<stdio.h>

void main() {
	int a, b;


	printf("두 정수를 입력하세요 : ");
	scanf_s("%d %d", &a, &b);

	printf("나눗셈 연산식은 \" %d / %d = %lf\" 입니다.\n", a, b, (double)a / b);


}