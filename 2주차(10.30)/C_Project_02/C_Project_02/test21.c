#include <stdio.h>

void main() {
	int num1 = 3, num2 = 4;
	double divResult;

	divResult = num1 / num2;
	printf("나눗셈 결과 : %lf\n", divResult); //결과 : 0.000000


	// 형변환 연산자( )
	// 변수는 한번 선언하면 타입은 절대 변하지 않는다.
	divResult = (double)num1 / num2; // 3.0 /4 ==> 3.0 / 4.0
	printf("나눗셈 결과 : %lf\n", divResult); //결과 : 0.750000
}