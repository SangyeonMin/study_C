#include <stdio.h>
#include <string.h> //�ܺ� ������ ���Խ�Ű�ڴ�

int main() {
	char str1[80] = "Long time no see.";
	char str2[80] = "What's up?";

	if (strlen(str1) > strlen(str2)) //���ڿ��� ����
		printf("%s\n", str1);
	else
		printf("%s\n", str2);


	return 0;

}