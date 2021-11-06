#include <stdio.h>

void main() {

	//sizeof() : 자료형의 크기를 계산하는 연산자
	printf("%d바이트\n", sizeof('V')); // 문자 : 4바이트 why? 문자상수는 1byte인데 4byte로 잡는건 ? 컴퓨터 성능이 좋아짐 (컴파일러에 따라 바뀜)
	printf("%d바이트\n", sizeof(35)); // 정수 : 4바이트(기본)
	printf("%d바이트\n", sizeof(1.65)); // 실수 :  8바이트(기본)
	printf("%d바이트\n", sizeof(1.65f)); // f : float(4byte), 실수지만 4byte를 사용 
	printf("%d바이트\n", sizeof("abcd")); // 문자열 :  4바이트 
	printf("%d바이트\n", sizeof("abcdef")); // 문자열 :  7바이트 (문자가 늘어날때마다 byte증가)
	printf("%d바이트\n", sizeof("K")); // 문자열 :  2바이트 
	printf("%d바이트\n", sizeof(10/4)); // 정수/정수=정수  4바이트
	printf("%d바이트\n", sizeof(10/4.0)); // 정수/실수=실수  8바이트 


}