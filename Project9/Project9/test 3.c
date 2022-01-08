#include <stdio.h>

int main() {
	//배열과 포인터 관계
	int ary[5] = { 10,20,30,40,50 };
	int* ap;
	ap = &ary[0];

	printf("첫번째 배열요소의 주소값 : %p\n", ap); //주소
	printf("첫번째 배열요소의 주소값 : %d\n", *ap); //주소가 가르키는 값
	printf("배열명의 주소값은? %p\n", ary); //★ 배열명도 시작 주소값

	ap = &ary[0] + 1;

	printf("두번째 배열요소의 주소값 : %p\n", ap); //주소
	printf("두번째 배열요소의 주소값 : %d\n", *ap); //주소가 가르키는 값

	return 0;


}