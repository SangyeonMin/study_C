#include <stdio.h>

void main() {
	int nInput = 0;

	printf("���ڸ� �Է��ϼ���:");
	scanf_s("%d", &nInput);

	if (nInput >= 10) {
		puts("10�̻�");
	}
	else {
		puts("10�̸�");
	}

}