#include <stdio.h>

void main() {
	int history, letters, art;
	int total;
	double average;
	
	printf("역사,문학,예능 정수를 입력하세요 : ");
	scanf_s("%d %d %d", &history, &letters, &art);

	total = history + letters + art;
	average = (double)total / 3; // 또는 total / 3.0

	printf("총점은 %d이고 평균은 %lf입니다.\n", total, average);

}