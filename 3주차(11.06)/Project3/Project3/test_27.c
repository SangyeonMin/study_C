#include<stdio.h>

void main() {

	//시간을 구하려면 24 , 분을 구하려면 60, 초를 구하려면 60

	double annual = 365.2422; //365일 .2422시간
	int day, hour, min, sec;

	day = (int)annual; //365 
	annual = annual - day; // 0.242200; 
	printf("day=%d annual=%lf\n",day,annual); //day=365, annual=0.242200

	annual = annual * 24; //하루가 24시간 
	printf("annual=%lf\n",annual ); //5.812800 
	hour = (int)annual; //5,  필요없는 0.812800제거 

	annual = annual - hour; //0.812800
	annual = annual * 60; // 1분은 60초 1시간은 60분
	printf("annual=%lf\n", annual); //48.768000
	min = (int)annual; //48

	annual = annual - min;
	printf("annual=%lf\n", annual); //0.768000
	annual = annual * 60; // 1분은 60초 
	sec = (int)annual;

	printf("1년은 %d일, %d시간, %d분, %d초입니다.\n", day, hour, min, sec);

}