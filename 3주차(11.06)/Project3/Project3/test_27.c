#include<stdio.h>

void main() {

	//�ð��� ���Ϸ��� 24 , ���� ���Ϸ��� 60, �ʸ� ���Ϸ��� 60

	double annual = 365.2422; //365�� .2422�ð�
	int day, hour, min, sec;

	day = (int)annual; //365 
	annual = annual - day; // 0.242200; 
	printf("day=%d annual=%lf\n",day,annual); //day=365, annual=0.242200

	annual = annual * 24; //�Ϸ簡 24�ð� 
	printf("annual=%lf\n",annual ); //5.812800 
	hour = (int)annual; //5,  �ʿ���� 0.812800���� 

	annual = annual - hour; //0.812800
	annual = annual * 60; // 1���� 60�� 1�ð��� 60��
	printf("annual=%lf\n", annual); //48.768000
	min = (int)annual; //48

	annual = annual - min;
	printf("annual=%lf\n", annual); //0.768000
	annual = annual * 60; // 1���� 60�� 
	sec = (int)annual;

	printf("1���� %d��, %d�ð�, %d��, %d���Դϴ�.\n", day, hour, min, sec);

}