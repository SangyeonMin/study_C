#include <stdio.h>

int main() {
	char word[80];
	int i;

	printf("단어를 입력하세요. : ");
	scanf_s("%s", word ,80); 

	//scanf함수는 문자열 입력 받으면 널문자 자동으로 채워준다.
	i = 0;

	while (word[i] != '\0') {
		i++;

	}

	printf("%s 단어의 길이는 %d자입니다.",word, i);

	return 0;

}