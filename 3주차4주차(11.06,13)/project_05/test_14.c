#include <stdio.h>

void main() {

	int nInput = 0; 
	char chCredit = 'X';
	printf("숫자를 입력하시오. : ");
	scanf_s("%d", &nInput);

	if (nInput >= 90)
		chCredit = 'A';
	else if (nInput >= 80)
		chCredit = 'B';
	else if (nInput >= 70)
		chCredit = 'C';
	else if (nInput >= 60)
		chCredit = 'D';
	else
		chCredit = 'F';


	printf("Credit : %c", chCredit);

}