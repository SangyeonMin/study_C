#include <stdio.h>

void main() {
	int gugudan;
	int i=0;
	printf("�� ���� ���� �Է��ϼ���. : ");
	scanf_s("%d", &gugudan);

	while (i <= 9) {
		printf("%d * %d = %d", gugudan, i, gugudan*i);
		i++;
	}



}