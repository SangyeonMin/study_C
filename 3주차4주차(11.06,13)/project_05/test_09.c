#include <stdio.h>

void main() {
	int nInput = 0;

	printf("숫자를 입력하세요:");
	scanf_s("%d", &nInput);

	if (nInput >= 10) {
		puts("10이상");
	}
	else {
		puts("10미만");
	}

}