#include <stdio.h>

void main() {
	int i = 0;
	int sum = 0;

	i = 1;
	while (i <= 100) {
		if (i % 2 == 1) // ( i % 2 !=0 ) 
			sum = sum + i;
		i++;
	}
	printf("1부터 100까지의 홀수의 합은 %d", sum);

}