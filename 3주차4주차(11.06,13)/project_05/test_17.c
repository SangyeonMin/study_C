#include <stdio.h>

void main() {
	int nInput = 0;
	char chCredit; 
	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &nInput);

	switch (nInput / 10) {  // ������ �ȴ�
	case 10 :
	case 9 : 
		chCredit = 'A'; 
		break;

	case 8: 
		chCredit = 'B';
		break;

	case 7:
		chCredit = 'C';
		break;

	case 6:
		chCredit = 'D';
		break;

	default : 
		chCredit = 'F';

	}

	printf("Credit : %c\n", chCredit);

}
