#include <stdio.h>

void ary_prn(int* ap); //반드시 적어줘야함 안적으면 ary_prn가 정의되지 않았습니다라고 뜸 

int main() {
	int ary[5] = { 10,20,30,40,50 };

	ary_prn(&ary); 
	return 0;
}

void ary_prn(int* ap) {
	// 반복문으로 처리

	for (int i = 0; i < 5; i++) {
		// 다른 방법 printf("%5d ", ap[i]);
		//다시 이해하기 ! 배열명도 시작주소, 포인터도 시작주소라 ap[i] 가 가능
		
	}

}