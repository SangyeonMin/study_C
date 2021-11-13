#include<stdio.h>

void main() {
	double weight, height;
	double bmi;

	printf("몸무게를 입력하세요(kg):");
	scanf_s("%lf", &weight);
	printf("키를 입력하세요(cm) :");
	scanf_s("%lf", &height); 
	height = height / 100;
	bmi = weight / (height * height);
	printf("당신의 BMI는 %.1lf입니다.\n", bmi);
	if (bmi>=20.0 && bmi<25.0) {  // 20 <= bmi <25 가 안되는 이유 -> 프로그램 실행 순서 (위>아래, 좌우)
		printf("표준 체중입니다."); //20이상 25미만
	}
	else {
		printf("체중 관리가 필요합니다.");
	}
}