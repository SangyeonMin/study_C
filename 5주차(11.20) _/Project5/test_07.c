#include <stdio.h>

void main() {
	int gugudan;
	int i=0;
	printf("한 개의 단을 입력하세요. : ");
	scanf_s("%d", &gugudan);

	while (i <= 9) {
		printf("%d * %d = %d", gugudan, i, gugudan*i);
		i++;
	}



}