#include <stdio.h>

//함수란?특별한 (기능)을 수행하는 코드 


int main() {
//int main() 에서 int란 반환값이 정수형이라는 것을 의미한다.
	int result; 
	result = add(3,4); //7 저장 
	printf("덧셈 결과 1 : %d\n", result); // 7
	result = add(5, 8); // 13 덮어써서 새로운 값을 저장 
	printf("덧셈 결과 2 : %d\n", result); // 13

	return 0; //내가 호출하는게 아니라 윈도우가 호출하는 것 
	// void main() 인 경우 void가 반환값이 없기 때문에 return 0 ;을 안써줬지만 
	// int main() 은 return 0; 을 꼭 써주기 (안써도 문제 없지만 써주기!!) 
}
//1. 함수의 기능에 맞는 이름을 정한다.  (add / main)
//2. 매개변수는 옵션이다.
//3. 리턴값의 형태를 적어준다. (void) ※ void 란 반환값이 없음을 표시한다. 
//4. 함수는 ( ) 가 존재한다. 
//5. { }  몸체 
//6. 함수는 호출되기 전에 정의되어 있어야하고, 호출되면 작동한다.!!

int add(int num1, int num2) {
	return num1 + num2; //7반환하고 종료
	// return 값이 있을 경우에는 값을 (함수를 호출한 곳으로)반환하고 종료
	// return 값이 없을 경우에는 함수 종료를 의미
	// 매개변수는 외부로부터 값을 전달 받는다. 
}
