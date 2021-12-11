#include <stdio.h>

int main() {
	int ages[5];
	int tot=0;
	double avg;
	int i;
	printf("다섯 명의 나이를 입력하세요 : ");

	for (i = 0; i < 5; i++) {
		// 각 배열요소에 나이 입력
		scanf_s("%d", &ages[i]); //%d 뒤에 공백 주의 → 공백 입력 시 제대로 출력 안됨
	}

	for (i = 0; i < 5; i++) {
		// 모든 배열 요소의 값을 누적 
		tot += ages[i];
	}

	avg = tot / 5.0; // 평균나이 계산 
	printf("입력된 다섯 명의 나이 : ");
	for (i = 0; i < 5; i++) {
		// 배열에 저장된 값 출력 
		printf("%d ", ages[i]);
 	}
	printf("\n다섯 명의 평균 나이는 %.1lf입니다\n", avg);

	return 0;
}