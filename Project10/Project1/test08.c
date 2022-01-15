#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	
	char str_in[80];
	char novel[800] = "";


	while (1) { // 무한반복  
		printf("문자열을 입력하세요 : ");
		gets(str_in);

		if (strcmp(str_in, "끝") == 0)
			break;

		strcat(novel, str_in);
		strcat(novel, " ");
	
		printf("현재까지의 줄거리 : ");
		puts(novel);
		puts("\n");
	}

	

	return 0;
}