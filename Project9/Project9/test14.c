#include <stdio.h>

int main() {
	char str1[] = "My String"; //배열 (값 변경 불가)
	char* str2 = "Your String"; // 포인터 변수  (값 변경 가능)
	printf("%s\n", str1);
	printf("%s\n", str2);

	
	str2 = "Our String";
	printf("%s\n", str1);
	printf("%s\n", str2);


	str1[0] = 'x'; //배열 위치로 값을 변경 가능 
	//str2[0] = 'x';  결과 안나옴 //변수 = 값 
	//str2[0]은 주소를 가지고 있는 변수, str2[0]의 주소값을 가지고 있음
	printf("%s\n", str1);

	printf("%s\n", str2);
	printf("%c\n", str2[0]);

	

	return 0;

}