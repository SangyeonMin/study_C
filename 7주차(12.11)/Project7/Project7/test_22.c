#include <stdio.h>


void main() {
	int i;
	int j;

	//�ٱ� for �۵��� ���� for �۵��� ��� �Ϸ����� �� 
	for (i = 1; i <= 9; i++) {
		for (j = 2; j <= 8;j+=3) {
			printf("%d * %d = %2d\t", j, i, j * i);
		}
		printf("\n");
		
	}


}