#include <stdio.h>

void main() {
	int x;
	int y;

	for (y = 0; y < 5; y++) {
		x = 0;
		for (x = 0; x < 4 ; x++) {
			printf("*\t");
		}
		printf("\n");
	}

}