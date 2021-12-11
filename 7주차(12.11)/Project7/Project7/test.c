#include <stdio.h>

void main() {
	int input, change;
	int w500, w100, w50, w10;


	printf("돈을 입력하세요 : ");
	scanf_s("%d", &input);

	change = input - 150;  // 커피값이 150원일 때 잔돈 계산 

	w500 = change / 500;   // / 나누기 
	change = change % 500;  // % 나머지 
	w100 = change / 100;
	change = change % 100;
	w50 = change / 50;
	change = change % 50;
	w10 = change / 10;

	printf("500원짜리 동전 %d\n", w500);
	printf("100원짜리 동전 %d\n", w100);
	printf("50원짜리 동전 %d\n", w50);
	printf("10원짜리 동전 %d\n", w10);
}