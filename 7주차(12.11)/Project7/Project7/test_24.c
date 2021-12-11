#include <stdio.h>


void main() {
	int num;
	printf("start!");
	for (num = 0; num < 20; num++) {
		
		// 2의 배수, 3의 배수 제외한 나머지만 찍힘 1, 5, 7, 11, 13, 17, 19
		/*정답 1.
			if (num % 2 != 0 && num % 3 != 0) {
			printf("%d ", num);
			} */

		if (num % 2 == 0 || num % 3 == 0) 
			continue; // if조건을 만족하면 for문을 다시 실행하러 가라 
			printf("%d ", num);
	
	}
	printf("end!\n");

}
