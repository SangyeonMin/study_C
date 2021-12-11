#include <stdio.h>

int Add(int num1, int num2) {
	return num1 + num2;


}

void ShowAddResult(int num) {
	// 반환값이 없는 함수 
	// 외부로 붙더 받아서 결과물을 보여주는 함수 

	printf("덧셈 결과 출력 : %d\n", num);

}

int ReadNum(void) {
	//매개 변수 없는 함수 (외부로 받는 경우가 없음) 
	//입력 받을 때 사용 
	int num;
	scanf_s("%d", &num);
	return num;

}

void HowToUseThisProg(void) {
	printf("두 개의 정수를 입력하시면 덧셈 결과가 출력됩니다.\n");
	printf("자!그럼 두 개의 정수를 입력하세요.\n");
}

int main() {
	int result, num1, num2;

	HowToUseThisProg();
	num1 = ReadNum();
	num2 = ReadNum();
	result = Add(num1, num2);
	ShowAddResult(result);

	return 0;
}