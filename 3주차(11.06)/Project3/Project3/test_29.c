#include <stdio.h>
// 2byte : -32768 ~ 32767  unsigned : 0~65535
// 4byte : -2147483648 ~ 2147483647 unsigned : 0~4294967295

void main() {
	char ch; //1byte : -128~127
	unsigned char uch; // 0~255
	printf("char���� �ִ밪�� �Է��ϼ���:");
	scanf_s("%d", &ch);
	printf("char���� ����� ���� :%d\n", ch);


	printf("unsigned char���� �ִ밪�� �Է��ϼ���:");
	scanf_s("%u", &uch);
	printf("char���� ����� ���� :%d\n", uch); // %u�� �ϸ� �ȵ�



}