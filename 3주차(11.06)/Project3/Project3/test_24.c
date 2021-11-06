#include <stdio.h>

void main() {
	int sec = 32767;
	int hour, min;

	hour = sec / 3600; // 시간 구하기. 1시간은 3600 초
	sec = sec % 3600; 
	min = sec / 60;
	sec = sec % 60; 


	printf("32767초는 %d시간,%d분,%d초입니다.\n ", hour, min, sec);


}