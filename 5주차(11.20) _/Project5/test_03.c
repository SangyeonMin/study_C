#include <stdio.h>

void main() {
	int height = 0;
	int days = 0; 

	do {
		height = height + 55;
		days = days + 1; 
	} while (height < 300);

	printf("달팽이가 우물을 올라가는 데 걸린 일 수 : %d\n ", days);
}