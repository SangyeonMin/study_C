#include <stdio.h>


int main() {
	int a = 10, b = 20;

	printf("�ٲٱ� �� a :%d, b:%d\n", a, b);

	{
		int temp;

		temp = a;
		a = b;
		b = temp;

		printf("temp��:%d\n", temp);
	}


	printf("�ٲ� �� a :%d, b:%d", a, b);
	// prtinf("temp��:", temp); ���� ���� ������? 
}