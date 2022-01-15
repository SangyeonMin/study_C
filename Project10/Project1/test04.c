#include <stdio.h>
#include <string.h> //외부 파일을 포함시키겠다

int main() {
	char str1[20] = "apple";
	char str2[20] = "banana";
	char temp[20];

	//문자열 복사 함수 strcpy()
	strcpy(temp, str1);
	strcpy(str1, str2);
	strcpy(str2, temp);
	
	printf("str1:%s\n", str1);
	printf("str2:%s\n", str2);


	return 0;
}