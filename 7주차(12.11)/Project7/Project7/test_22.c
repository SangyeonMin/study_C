#include <stdio.h>


void main() {
	int i;
	int j;

	//바깥 for 작동은 안쪽 for 작동이 모두 완료했을 때 
	for (i = 1; i <= 9; i++) {
		for (j = 2; j <= 8;j+=3) {
			printf("%d * %d = %2d\t", j, i, j * i);
		}
		printf("\n");
		
	}


}