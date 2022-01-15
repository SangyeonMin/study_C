#include <stdio.h>


int main() {
	int a = 10, b = 20;

	printf("바꾸기 전 a :%d, b:%d\n", a, b);

	{
		int temp;

		temp = a;
		a = b;
		b = temp;

		printf("temp값:%d\n", temp);
	}


	printf("바꾼 후 a :%d, b:%d", a, b);
	// prtinf("temp값:", temp); 에러 나는 이유는? 
}