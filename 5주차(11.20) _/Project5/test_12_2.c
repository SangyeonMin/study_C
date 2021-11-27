#include <stdio.h>

void main() {
	int n;
	int i = 0;

	printf("양수를 입력하세요 : ");
	scanf_s("%d", &n); 

	while (i<n) {

		printf("*");
		i++;
		if (i%5==0) {
			printf("\n");
		}

	}
}