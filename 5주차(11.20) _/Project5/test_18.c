#include <stdio.h>

void main() {
	int n;
	int i;
	int sum=0;

	printf("����� �Է��ϼ���:");
	scanf_s("%d", &n);

	while (n > 0) {
		sum = 0;
		for (i = 1; i <= n; i++) {
			sum += i; //sum = sum + i ;
		}
		
		printf("1���� %d������ ���� : %d\n", n, sum);
		printf("����� �Է��ϼ��� : "); 
		scanf_s("%d", &n);
	
	}

}