#include <stdio.h>

int main() {
	int ary[5] = { 10,20,30,40,50 };
	int* ap = ary;
	int i;

	printf("ap 矫累林家 : %p\n", ap);
	printf("ary 矫累林家: %p\n", ary);
	printf("ap 矫累林家客 ary 矫累林家绰 悼老\n");

	for (i = 0; i < 5; i++) {
		printf("%5d", *(ap+i));
	}

	return 0;



}