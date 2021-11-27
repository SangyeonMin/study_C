#include <stdio.h>

void main() {
	int x;
	int y;

	for (y = 0; y < 5; y++) {
		for (x = 0; x < 5-y; x++) {
			printf("*\t");
		}
		
		printf("\n");
	}

}