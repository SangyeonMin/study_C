#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {

	char str[80];
	char ch;
	int i = 0;

	while (1) {
		printf("���ڿ��� �Է��ϼ���(����� ����) : ");
		ch = getchar();
		if (ch == '\n')
			break;
		str[0] = ch;
		i = 1;

		while (1) {
			ch = getchar();
			if (ch == '\n')
				break;
			str[i] = ch; //(1)
			i++;
		}

		str[i] = '\0'; //(2)


		printf("�Էµ� ���ڿ�:%s", str);
		printf("\n");

	}



	return 0;
}