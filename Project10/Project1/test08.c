#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	
	char str_in[80];
	char novel[800] = "";


	while (1) { // ���ѹݺ�  
		printf("���ڿ��� �Է��ϼ��� : ");
		gets(str_in);

		if (strcmp(str_in, "��") == 0)
			break;

		strcat(novel, str_in);
		strcat(novel, " ");
	
		printf("��������� �ٰŸ� : ");
		puts(novel);
		puts("\n");
	}

	

	return 0;
}