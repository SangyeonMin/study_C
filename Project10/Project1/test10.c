#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	// 하나의 문자만을 전용으로 입출력하는 함수
	// 문자들을 연속으로 입출력하면 문자열의 입출력이 됨
	// 문자 입력 함수 : getchar 
	// 문자 출력 함수 : putchar 

	char str[80];
	int ch;
	int i;
	char s[80] = { 0 };

	printf("문자열을 입력하세요 : ");
	for (i = 0; i < 4; i++) {
		ch=getchar();  // L o v e 
		str[i] = ch; // str Love 
	}

	str[i] = '\0'; //끝(마지막 위치)에다가 널문자를 수동으로 넣어줘야 함 
	
	
	for (i = 0; i < 5; i++) {
		printf("%dth 입력된 문자 : ",i); // Love\0 
		printf("%c \n", str[i]);
	}

	printf("\n");

	printf("입력된 문자열 : ");

	i = 0;
	while (str[i] != '\0') {
		putchar(str[i]);
		i++;
	}
	return 0;
}