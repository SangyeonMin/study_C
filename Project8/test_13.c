#include <stdio.h>

int main() {

	char str[50] = "I like C programming";
	printf("string:%s\n", str);

	str[8] = '\0'; // 8��° ���� �ڸ��� �ι��� ���� �Է� 

	printf("string:%s\n", str); 

	str[6] = '\0'; // 8��° ���� �ڸ��� �ι��� ���� �Է� 

	printf("string:%s\n", str);

	str[1] = '\0'; // 8��° ���� �ڸ��� �ι��� ���� �Է� 

	printf("string:%s\n", str);

	return 0;

}
