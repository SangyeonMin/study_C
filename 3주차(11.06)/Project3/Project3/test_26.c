#include<stdio.h>

void main() {
	double time = 0.375; //������ �ð�
	int min; 

	time = time * 60; //22.5   1�� = 60��
	printf("time = %lf\n", time);
	min = (int)time; //22
	printf("�� : %d\n", min); 
	time = time - min; 
	printf("�� : %lf\n", time*60); // 30.000000 (1�� 60��)
	printf("�� : %d\n", (int)(time * 60)); //30

}