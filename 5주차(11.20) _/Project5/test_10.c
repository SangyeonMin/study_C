#include <stdio.h>

void main() {
	int a = 0;
	int b = 0;

	++a;
	b++;

	printf("a=%d, b=%d\n", a, b);  // 1  1 
	b = a++;  // b에 a을 넣고 a를 증가 
	printf("a=%d, b=%d\n", a, b);  // 2  1  
	b = ++a; // a를 무조건 증가하고 b에 넣음 
	printf("a=%d, b=%d\n", a, b);  // 3 3 

	printf("a=%d, b=%d\n", a++, b++); // 3  3  a, b 둘다 출력시킨 후 나중에 증가 
	printf("a=%d, b=%d\n", a, b);  // 4 4 

}