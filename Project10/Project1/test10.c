#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	// �ϳ��� ���ڸ��� �������� ������ϴ� �Լ�
	// ���ڵ��� �������� ������ϸ� ���ڿ��� ������� ��
	// ���� �Է� �Լ� : getchar 
	// ���� ��� �Լ� : putchar 

	char str[80];
	int ch;
	int i;
	char s[80] = { 0 };

	printf("���ڿ��� �Է��ϼ��� : ");
	for (i = 0; i < 4; i++) {
		ch=getchar();  // L o v e 
		str[i] = ch; // str Love 
	}

	str[i] = '\0'; //��(������ ��ġ)���ٰ� �ι��ڸ� �������� �־���� �� 
	
	
	for (i = 0; i < 5; i++) {
		printf("%dth �Էµ� ���� : ",i); // Love\0 
		printf("%c \n", str[i]);
	}

	printf("\n");

	printf("�Էµ� ���ڿ� : ");

	i = 0;
	while (str[i] != '\0') {
		putchar(str[i]);
		i++;
	}
	return 0;
}