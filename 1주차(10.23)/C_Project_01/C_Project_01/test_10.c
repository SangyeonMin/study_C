#include <stdio.h>

void main() {
	int amount;
	double total, tax, price;
	
	printf("���� ��뷮�� �Է��ϼ���(kw) :");
	scanf_s("%d", &amount);
	
	price = 660 + (amount * 88.5);
	tax = price * 0.09; 
	total = price + tax;

	printf("���� ������� %lf�� �Դϴ�.", total);


}
