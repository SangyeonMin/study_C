#include<stdio.h>

void main() {
	int employed = 160; //�����
	int graduation = 245; //������
	double percentage;


	percentage = ( employed / (double)graduation) * 100; // (  ) ����ȯ ������, cast


	printf("%lf", percentage); 



}