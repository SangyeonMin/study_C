#include <stdio.h>

void assign(); 

int main() {
	int cheoli = 0; 
	assign(&cheoli); // &cheoli 주소를 넘겨주며 호출 
	printf("함수가 호출된 후에 cheoli에 저장된 값 : %d \n", cheoli);

	return 0;

}

void assign(int *ip) { // int main() 함수의 cheoli의 주소값을 매개변수로 받음
	// 함수는 메모리에 별도 공간이다.
	// 함수는 호출시 작동한다. 
	*ip = 100; // *ip가 가르키고 있는 cheoli (시작)주소값에 100 값을 넣음
}
