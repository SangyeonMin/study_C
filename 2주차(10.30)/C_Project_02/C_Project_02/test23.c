#include <stdio.h>

void main() {
	int input, change;
	int w500, w100, w50, w10;

	printf("돈을 입력하세요 : ");
	scanf_s("%d", &input);

	//

	w500 = change / 500;
	change = change % 500;
	w100 = change / 100;
	change = change % 100;
	w50 = change / 50 ;
	change = change % 50;
	w10 = change / 10;

}