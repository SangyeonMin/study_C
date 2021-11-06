#include <stdio.h>
// 2byte : -32768 ~ 32767  unsigned : 0~65535
// 4byte : -2147483648 ~ 2147483647 unsigned : 0~4294967295

void main() {
	char ch; //1byte : -128~127
	unsigned char uch; // 0~255
	printf("char형에 최대값을 입력하세요:");
	scanf_s("%d", &ch);
	printf("char형에 저장된 값은 :%d\n", ch);


	printf("unsigned char형에 최대값을 입력하세요:");
	scanf_s("%u", &uch);
	printf("char형에 저장된 값은 :%d\n", uch); // %u로 하면 안됨



}