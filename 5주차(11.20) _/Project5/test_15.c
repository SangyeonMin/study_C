#include <stdio.h>

void main() {
	int total = 0;
	int i;
	int num;

	printf("0���� num������ ����, num��?");
	
	scanf_s("%d", &num);
	for (i = 0; i < num + 1; i++) { //i <= num;
		total = total + i;
	}


	printf("0���� %d���� ������� : %d\n", num, total);
}