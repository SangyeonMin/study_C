#include <stdio.h>

int main() {

	printf("주소값을 출력 : %p\n","dream");
	printf("첫번째 문자를 출력 : %c\n", *"dream");

	printf("세번째 주소를 출력 : %p\n", "dream" + 2);
	printf("세번째 문자를 출력 : %c\n", *("dream"+2));
	printf("세번째 문자를 출력 : %c\n", "dream"[2]);

	return 0;
}