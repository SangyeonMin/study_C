#include <stdio.h>


void main() {
	int sum=0; 
	int n=0;

	while (1) { //무한반복 
 		
		printf("0또는 양수값을 입력하세요 : ");
		scanf_s("%d", &n);
		// sum = sum + n;
		if (n < 0)
			break; //입력된 값이 음수이면 반복문을 빠져나간다.
		sum += n;
		
	}
	printf("그 동안 누적된 값 :%d\n", sum);

}