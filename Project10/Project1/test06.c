#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h> //�ܺ� ������ ���Խ�Ű�ڴ�

int main() {
	/* 
	* str1 > str2 ==> ���ϰ� 1
	* str1 < str2 ==> ���ϰ� -1
	* str1 == str2 ==> ���ϰ� 0
	*/
	char str1[20] = "banana";
	char str2[20] = "apple";
	char temp[20];

	int res;

	res = strcmp(str1, str2); // string compare

	if (res > 0) {
		strcpy(temp, str1);
		strcpy(str1, str2);
		strcpy(str2, temp);
	}
	printf("str1:%s\n", str1);
	printf("str2:%s\n", str2);

	return 0;

}