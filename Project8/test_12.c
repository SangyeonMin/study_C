#include <stdio.h>

int main() {
	char word[80];
	int i;

	printf("�ܾ �Է��ϼ���. : ");
	scanf_s("%s", word ,80); 

	//scanf�Լ��� ���ڿ� �Է� ������ �ι��� �ڵ����� ä���ش�.
	i = 0;

	while (word[i] != '\0') {
		i++;

	}

	printf("%s �ܾ��� ���̴� %d���Դϴ�.",word, i);

	return 0;

}