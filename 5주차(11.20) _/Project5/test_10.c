#include <stdio.h>

void main() {
	int a = 0;
	int b = 0;

	++a;
	b++;

	printf("a=%d, b=%d\n", a, b);  // 1  1 
	b = a++;  // b�� a�� �ְ� a�� ���� 
	printf("a=%d, b=%d\n", a, b);  // 2  1  
	b = ++a; // a�� ������ �����ϰ� b�� ���� 
	printf("a=%d, b=%d\n", a, b);  // 3 3 

	printf("a=%d, b=%d\n", a++, b++); // 3  3  a, b �Ѵ� ��½�Ų �� ���߿� ���� 
	printf("a=%d, b=%d\n", a, b);  // 4 4 

}