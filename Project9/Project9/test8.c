#include <stdio.h>

double ary_avg(int*);

int main() {
	int ary[5] = { 75,80,92,88,98 };
	double res; 
	res = ary_avg(ary);
	printf("배열의 평균은 : %2.1lf\n", res);

	return 0;
}

double ary_avg(int* param) {

	int sum = 0;
	double avg;
	for (int i = 0; i < 5; i++) {
		sum += param[i];
	}

	avg = sum / 5.0;
	return avg;
}

