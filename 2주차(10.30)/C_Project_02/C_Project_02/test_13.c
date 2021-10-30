#include <stdio.h>

void main() {
	char blood_type;
	// 문자를 입출력 할 때는 %c 변환 문자열을 사용한다.
	// AB형 제외
	printf("혈액형을 입력하세요 :");
	scanf_s("%c", &blood_type);

	printf("당신의 혈액형은 %c형입니다.\n", blood_type);

}
