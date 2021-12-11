#include <stdio.h>

//다섯 개의 숫자중 가장 큰수 찾기 
int main() {

	double nums[5];
	double max;
	int i;

	printf("다섯 개의 숫자를 입력하세요. : ");

	for (i = 0; i < 5; i++) {
		scanf_s("%lf", &nums[i]);
	}

	max = nums[0]; //기준 

	for (i = 0; i < 5; i++) {

		if (max < nums[i]) 
			max = nums[i];	

	}

	printf("가장 큰 값은 : %.1lf입니다.",max);

	return 0;
}