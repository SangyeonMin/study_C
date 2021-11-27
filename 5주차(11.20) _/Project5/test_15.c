#include <stdio.h>

void main() {
	int total = 0;
	int i;
	int num;

	printf("0ºÎÅÍ num±îÁöÀÇ µ¡¼À, numÀº?");
	
	scanf_s("%d", &num);
	for (i = 0; i < num + 1; i++) { //i <= num;
		total = total + i;
	}


	printf("0ºÎÅÍ %d±îÁö µ¡¼À°á°ú : %d\n", num, total);
}