#include <stdio.h>

void main() {
	char number;
	double batting_avg;
	int age;

	printf("등 번호를 입력하세요 :");
	scanf_s("%c", &number); // 문자 3을 입력, %d이면 숫자로 들어감

	printf("타율을 입력하세요 : ");
	scanf_s("%lf", &batting_avg); //빈칸

	printf("나이를 입력하세요 :");
	scanf_s("%d", &age);

	
	printf("%d번 선수의 타율은 %lf이고 나이는 %d살 입니다.\n", number, batting_avg, age);
}

