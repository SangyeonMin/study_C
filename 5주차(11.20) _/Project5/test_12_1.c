#include <stdio.h>

void main() {
	int nData;
	int i=0;

	printf("����� �Է��ϼ��� : ");
	scanf_s("%d", &nData);  // 6

	while (nData != 0) {
			
		    printf("*");
			i++;

			if (i == 5) {
				printf("\n");
				i = 0;
			}
			--nData;

	}
}