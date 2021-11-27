#include <stdio.h>

void main() {
	int nData;

	printf("양수를 입력하세요 : ");
	scanf_s("%d", &nData);  // 3

	while (nData != 0) {
		printf("*");
		--nData;
	}
}
