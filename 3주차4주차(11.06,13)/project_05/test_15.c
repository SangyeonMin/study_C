#include<stdio.h>

void main() {
	int lot;

	printf("당첨 번호를 입력하세요 : ");
	scanf_s("%d", &lot);

	// switch() case 구문
	switch (lot) {
	case 1 : 
		printf("김서방\n");
		break; //switch case 문을 빠져나간다. 
	case 2 : 
		printf("홍가네\n");
		break;
	case 3 : 
		printf("안산댁\n");
		break;
	default : 
		printf("당첨자가 없습니다!\n");//그 외의 값
	}

}