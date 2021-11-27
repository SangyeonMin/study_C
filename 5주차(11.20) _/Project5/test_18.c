#include <stdio.h>

void main() {
	int n;
	int i;
	int sum=0;

	printf("양수를 입력하세요:");
	scanf_s("%d", &n);

	while (n > 0) {
		sum = 0;
		for (i = 1; i <= n; i++) {
			sum += i; //sum = sum + i ;
		}
		
		printf("1부터 %d까지의 합은 : %d\n", n, sum);
		printf("양수를 입력하세요 : "); 
		scanf_s("%d", &n);
	
	}

}