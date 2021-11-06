#include<stdio.h>

void main() {
	char ch1, ch2;
	printf("두 개의 문자를 입력하세요 : ");
	scanf_s("%c%c", &ch1, 1, &ch2,1);
	printf("첫번째 문자 : %c\n", ch1);
	printf("두번째 문자 : %c\n", ch2);

}
