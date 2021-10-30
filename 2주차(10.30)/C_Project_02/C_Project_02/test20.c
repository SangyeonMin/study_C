#include <stdio.h>

void main() {
	// 연산시 결과값은 피연산자의 형태와 같다

	int result;
	double result2;

	result = 10 / 4;
	printf("result=%d\n", result); //결과 : 2

	//변수에 새로운 값 입력
	result = 10 / 4.0; //10.0 / 4.0 ==> 2.5
	printf("result=%d\n", result); //결과 : 2 (result 자료형이 int 정수)
	
	result2 = 10 / 4.0; //10.0 / 4.0 ==> 2.5
	printf("result=%lf\n", result2); //결과 : 2.5 (result1 자료형이 double 실수)
	printf("result=%d\n", result2); //결과 : 0 
	//중요! 출력하고자 하는 값과 변환 문자열은 일치시켜야 한다

}