#include <stdio.h>

void main() {
	int a, b;
	int min;

	//조건 연산자
	printf("두 정수를 입력하세요:");
	scanf_s("%d %d", &a, &b);
	min = (a < b) ? a:b ; // 조건식 ? 참:거짓;

	printf("작은 수는 :%d입니다\n", min);

}