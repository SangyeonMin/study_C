#include <stdio.h>

void main() {
	int n;
	int i = 0;

	printf("����� �Է��ϼ��� : ");
	scanf_s("%d", &n); 

	while (i<n) {

		printf("*");
		i++;
		if (i%5==0) {
			printf("\n");
		}

	}
}