#include <stdio.h>

void main() {
	int height = 0;
	int days = 0; 

	do {
		height = height + 55;
		days = days + 1; 
	} while (height < 300);

	printf("�����̰� �칰�� �ö󰡴� �� �ɸ� �� �� : %d\n ", days);
}