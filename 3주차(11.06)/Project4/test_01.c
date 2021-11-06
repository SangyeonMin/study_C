#include<stdio.h>

//다양한 변환 문자열
void main() {
	char ch = 'A';
	char name[80] = "황금박쥐";
	int in = 10;
	double db = 16.8;

	//데이터 출력시 값에 맞게 형변환 문자열 (%) 사용 

	printf("정수형 상수의 출력 : %d\n", -10);
	printf("정수형 변수의 출력 : %d\n", in);
	printf("정수형 수식의 출력 : %d\n", in/3);

	printf("실수형 상수의 소수점 형태로 출력 : %lf\n", 2.5); //%d로 입력시 0 이 나옴(주의)
	printf("실수형 변수의 지수 형태로 출력 : %le\n", db); // 지수는 %le
	printf("실수형 수식을 소수점 형태로 출력 : %lf\n", db/4);


	printf("문자 상수의 출력 : %c\n", 'F');
	printf("문자 변수의 출력 : %c\n", ch);
	printf("문자 배열의 출력 : %s\n", name); // 문자열은 %s 사용
	printf("문자열 상수의 출력 :%s\n", "날아라 태극호"); //문자열 직접 출력 %s사용


	
	printf("당신은 나의 100% 연인입니다.\n"); // 100%를 100으로만 인식 
	printf("당신은 나의 100%% 연인입니다.\n"); // 100%로 인식하게 됨



}