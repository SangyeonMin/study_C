#include <stdio.h>


void main() {
	int num;
	printf("start!");
	for (num = 0; num < 20; num++) {
		
		// 2�� ���, 3�� ��� ������ �������� ���� 1, 5, 7, 11, 13, 17, 19
		/*���� 1.
			if (num % 2 != 0 && num % 3 != 0) {
			printf("%d ", num);
			} */

		if (num % 2 == 0 || num % 3 == 0) 
			continue; // if������ �����ϸ� for���� �ٽ� �����Ϸ� ���� 
			printf("%d ", num);
	
	}
	printf("end!\n");

}
