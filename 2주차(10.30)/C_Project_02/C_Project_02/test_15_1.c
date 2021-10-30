#include <stdio.h>

void main() {
	char number;


	// %c 로 입력받고 %c로 출력시
	printf("등 번호를 입력하세요 :");
	scanf_s("%c", &number); // 문자 3을 입력
	printf("%c번 선수입니다.\n", number); //출력(문자) : 3

	// %c 로 입력받고 %d로 출력시
	printf("등 번호를 입력하세요 :");
	scanf_s("%c", &number); // 문자 3을 입력
	printf("%d번 선수입니다.\n", number);//출력(ASCII코드의 10진수) : 51
}