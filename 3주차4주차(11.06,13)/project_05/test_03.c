#include<stdio.h>

void main() {
	int a = 10;

	//논리 연산자
	printf("논리곱 연산 : %d\n", (a > 5) && (a <= 15)); // and, 1
	printf("논리합 연산 : %d\n", (a != 5) && (a == 15)); // and, 0
	printf("논리 부정 연산 : %d\n", !((a-5)>0)); // not, 0
	printf("피연산자가 상수인 경우 : %d\n", 3.4 && (a > 0)); // and , 1 ★ 0을 제외한 모든 숫자는 참 

}