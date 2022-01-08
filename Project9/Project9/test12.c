#include <stdio.h> 

int main() {
	char* name;
	name = "Hong gildong"; //문자열은 내부적으로 배열처럼 처리된다 

	printf("이름 : %s\n", name);

	//6번째 문자 g 출력
	printf("6번째 문자 : %c\n", *(name+5));
	printf("6번째 문자 : %c\n", name[5]); 
	
}