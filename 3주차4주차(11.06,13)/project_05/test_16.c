#include <stdio.h>

void main() {
	char sel;

	printf("M 오전, A 오후, E 저녁\n");
	printf("입력 : ");
	scanf_s("%c", &sel, 1);

	switch (sel) {
	case 'M':  // 두 가지 조건 사용 
	case 'm':
		printf("Morning\n");
		break;
	case 'A':
	case 'a':
		printf("Afternoon\n");
		break;
	case 'E':
	case 'e':
		printf("Evening\n");
		// break; 사용 해도 되고 안해도 됨
	}
}