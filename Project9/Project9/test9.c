#include<stdio.h>

double ary_min(double*);


int main() {
	double ary[] = { 1.5,20.1,16.4,2.3,3.5 };
	double res; 

	res = ary_min(ary); 
	printf("배열의 최소값 : %.1f\n",res);

	return 0;

}

double ary_min(double* param) {
	int i;
	double min;

	min = param[0];

	for (i = 0; i < 5; i++) {
		if (min > param[i]) {
			min = param[i];
		} 

	}

	return min;


}

