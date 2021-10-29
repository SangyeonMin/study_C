#include <stdio.h>

void main() {
	// 키보드로 부터 값을 받아오기
	int num1;
	int num2;
	int num3;

	printf("정수값 하나를 입력하시오 : ");
	scanf_s("%d", &num1); //키보드로 부터 값을 입력받기 위해 필요한 함수 
						 // 규칙 : scanf_s("입력받을 값 타입",&변수명(저장공간));
	printf("입력 받은 정수값은 %d 입니다.\n", num1);
	printf("정수값 두개를 입력하시오 : ");
	scanf_s("%d%d", &num1, &num2); 	//값을 연속해서 입력 할때는 공백으로 구분(스페이스바)
	num3 = num1 + num2;
	printf("입력 받은 정수값은 num1=%d num2=%d num3=%d", num1, num2, num3);

}