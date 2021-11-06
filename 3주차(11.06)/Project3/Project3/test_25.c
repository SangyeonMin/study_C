#include<stdio.h>

void main() {
	int employed = 160; //취업생
	int graduation = 245; //졸업생
	double percentage;


	percentage = ( employed / (double)graduation) * 100; // (  ) 형변환 연산자, cast


	printf("%lf", percentage); 



}