#include <stdio.h>

void main() {
	int nData;

	printf("����� �Է��ϼ��� : ");
	scanf_s("%d", &nData);  // 3

	while (nData != 0) {
		printf("*");
		--nData;
	}
}
