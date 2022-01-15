#include <stdio.h>

int main() {
	//scanf 함수는 빈칸이 포함된 문자열은 입력할 수 없다.
	//문자열의 입출력은 전용 함수를 사용한다.
	//한 줄을 모두 입력하는 한수 gets
	//문자열을 출력하는 함수 puts

	char str[80];
	printf("문자열을 입력하세요:");
	gets(str);
	printf("입력된 문자열:");
	puts(str);


	return 0;
}