#include <stdio.h>

void main() {
	int amount;
	double total, tax, price;
	
	printf("전기 사용량을 입력하세요(kw) :");
	scanf_s("%d", &amount);
	
	price = 660 + (amount * 88.5);
	tax = price * 0.09; 
	total = price + tax;

	printf("전기 사용요금은 %lf원 입니다.", total);


}
