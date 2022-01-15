#include <stdio.h>
#include <string.h> //외부 파일을 포함시키겠다

int main() {
	char str1[80] = "Long time no see.";
	char str2[80] = "What's up?";

	if (strlen(str1) > strlen(str2)) //문자열의 길이
		printf("%s\n", str1);
	else
		printf("%s\n", str2);


	return 0;

}