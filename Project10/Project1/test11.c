#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	// Ű���忡�� �ԷµǴ� �����ʹ� �ϴ� ���ۿ� ����ǰ� 
	// getchar �Լ��� ���۷κ��� �����͸� �������Ƿ� ���ڿ���
	// �ѹ��� �Էµȴ�.

	char str[80];
	char ch;
	int i=0;
	printf("���ڿ��� �Է��ϼ��� : ");
	while (1) {

		ch = getchar();
		if (ch == -1)  // -1 : Ctrl + Z
			break;
		str[i] = ch;
		i++;
	}

	str[i] = '\0';

	printf("�Էµ� ���ڿ�:");
	puts(str);

	return 0;
}