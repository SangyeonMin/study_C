#include <stdio.h>

int main() {

	printf("�ּҰ��� ��� : %p\n","dream");
	printf("ù��° ���ڸ� ��� : %c\n", *"dream");

	printf("����° �ּҸ� ��� : %p\n", "dream" + 2);
	printf("����° ���ڸ� ��� : %c\n", *("dream"+2));
	printf("����° ���ڸ� ��� : %c\n", "dream"[2]);

	return 0;
}