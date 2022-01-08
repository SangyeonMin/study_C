#include <stdio.h>

int main() {
	double ary[] = { 1.5, 20.1, 16.4, 2.3, 3.5 };
	double tot = 0;
	double avg = 0;

	int i; 


	for ( i = 0; i < 5; i++) {
		//포인터 사용
		tot = tot + *(ary + i);  // 배열명도 시작 주소값이다.
	}

	avg = tot / 5;

	printf("평균값 : %.2f\n", avg);

	printf("두번째 배열의 값은? %f\n", *(ary+1)); //★ 배열명도 시작 주소값
	return 0;


}