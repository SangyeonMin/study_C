#include <stdio.h>

void main() {
	int input, change;
	int w500, w100, w50, w10;


	printf("돈을 입력하세요 : ");
	scanf_s("%d", &input);  // 1000

	change = input - 150;  // 커피값이 150원일 때 잔돈 계산 

	w500 = change / 500;   // [ / 나누기(몫) ] 계산 : 850/500 ==> 1  나머지 350 
	change = change % 500;  // [ % 나머지 ] 계산 : 850 % 500 ==> 350, change = 350 으로 변경 
	w100 = change / 100; // 계산 : 350 / 100 ==> 3 나머지 50 
	change = change % 100; // 계산 : 350 & 100 => 50 , change = 50 으로 변경
	w50 = change / 50; // 계산 : 50 / 50 ==> 1 , 나머지 0
	change = change % 50; // 계산 : 50 % 50 ==> 0 , change = 0으로 변경  
	w10 = change / 10;

	printf("500원짜리 동전 %d\n", w500); // 1
	printf("100원짜리 동전 %d\n", w100); // 3
	printf("50원짜리 동전 %d\n", w50); // 1 
	printf("10원짜리 동전 %d\n", w10);
}