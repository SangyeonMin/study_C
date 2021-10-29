#include <stdio.h>

void main() {
	printf("100+100"); // 결과 : 100 + 100 why? " " 큰따옴표 = 문자열 
	printf("\n");
	printf("%d", 100 + 100); // 결과 200
	printf("\n");
	printf("나의 나이는 %d이다", 27); // %d 자리에 숫자를 넣겠다는 뜻
									 // %d = 정수값 변환 문자열 
	printf("\n");
	printf("%d과 %d의 합은 %d 입니다", 2, 3, 2 + 3); //순서대로 %d자리에 정수값 넣음
	printf('10'); // 출력 안됨. printf는 무조건 " " 가 있어야 출력 
}