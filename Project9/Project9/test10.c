#include<stdio.h>

double ary_avg(int*);

int main() {
	int ary[5];
	int i;
	double res;
	int* ap;

	ap = ary;
	// 반복문이용하여 카보드로부터 데이터를 입력받은 후 평균계산
	for (i = 0; i < 5; i++) {
		scanf_s("%d", ap+i); 
	}

	res = ary_avg(ary);
	printf("배열의 평균은 : ");
	printf("%.2lf\n", res);

	return 0;
}

double ary_avg(int *ap) {
	int tot = 0;
	double avg;
	for (int i = 0; i < 5; i++) {
		tot += ap[i];

	}

	avg = tot / 5.0;
	return avg;
}