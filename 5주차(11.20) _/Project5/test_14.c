#include <stdio.h>

void main() {
	int i;
	int sum = 0; //주의

	for (i = 1; i <= 10; i++) {
		sum = sum + i;
	}
	printf("1부터 10까지의 합은 : %d\n", sum);

}