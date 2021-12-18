#include <stdio.h>

int main() {
	char word[50];
	word[0] = 'L';
	word[1] = 'o';
	word[2] = 'v';
	word[3] = 'e';
	word[4] = '\0';

	printf("%s", word);
	// 문자 배열의 마지막에 널문자('\0')가 없으면 저장된 문자열의 끝을 
	// 알 수 없다. 


}
