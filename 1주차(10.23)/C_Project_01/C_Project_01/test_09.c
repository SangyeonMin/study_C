#include <stdio.h>

void main() {
	//1. 변수 선언
	int bongbong, bonus, total; //연달아 정수 변수 선언
	double tax, real_incom; // double : 실수 타입 

	//2. 초기화 
	bongbong = 150;
	bonus = 60;

	//3. 계산;
	total = bongbong + bonus; // 총 수입액
	tax = total * 0.09; //세금 (정수 * 실수 -> 실수)

	//실 수입액 구하시오.
	real_incom = total - tax;

	//출력 
	printf("이몽룡의 실수입액은 %lf 만원입니다", real_incom);
	// 정수 출력 : %d, 실수 출력 : %lf(영어 엘, 에프)

}