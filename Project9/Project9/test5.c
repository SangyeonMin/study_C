#include <stdio.h>

int main() {
	int ary[5] = { 10,20,30,40,50 };
	int* ap = ary;
	int i;

	printf("ap �����ּ� : %p\n", ap);
	printf("ary �����ּ�: %p\n", ary);
	printf("ap �����ּҿ� ary �����ּҴ� ����\n");

	for (i = 0; i < 5; i++) {
		printf("%5d", *(ap+i));
	}

	return 0;



}