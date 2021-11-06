#include<stdio.h>

void main() {
	double time = 0.375; //단위는 시간
	int min; 

	time = time * 60; //22.5   1분 = 60초
	printf("time = %lf\n", time);
	min = (int)time; //22
	printf("분 : %d\n", min); 
	time = time - min; 
	printf("초 : %lf\n", time*60); // 30.000000 (1분 60초)
	printf("초 : %d\n", (int)(time * 60)); //30

}