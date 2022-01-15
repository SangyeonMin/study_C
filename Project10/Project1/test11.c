#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	// 키보드에서 입력되는 데이터는 일단 버퍼에 저장되고 
	// getchar 함수는 버퍼로부터 데이터를 가져오므로 문자열은
	// 한번에 입력된다.

	char str[80];
	char ch;
	int i=0;
	printf("문자열을 입력하세요 : ");
	while (1) {

		ch = getchar();
		if (ch == -1)  // -1 : Ctrl + Z
			break;
		str[i] = ch;
		i++;
	}

	str[i] = '\0';

	printf("입력된 문자열:");
	puts(str);

	return 0;
}