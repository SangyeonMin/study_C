#include <stdio.h>

int main() {

	int a;
	a = 10;
	int *ap; // 포인터 변수 (주소를 저장하고 그 해당되는 주소를 가리킨다.)
	ap = &a;

	printf("a변수의 값 출력 : %d\n", a);

	printf("a변수의 시작 주소 : %p\n", &a); //a의 시작주소 
	printf("ap포인터 변수의 값 : %p\n", ap); //ap는 a의 시작주소 값을 저장하고 가르킨다. 
	printf("ap포인터 변수의 시작 주소 : %p\n", &ap); //ap의 시작주소
	printf("ap포인터 변수가 가리키는 곳의 값 : %d\n", *ap); // ap가 가르키고 있는 주소의 값
 
	*ap = 20; 
	printf("a변수의 값 출력 : %d", a);

	return 0;
}