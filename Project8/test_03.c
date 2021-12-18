#include <stdio.h>

int main() {
	double a = 1.3;
	double b = 1.7;
	double* ap;
	double* bp;

	double temp;

	ap = &a; //a �ּ� 
	bp = &b; // b �ּ� 

	printf("a,b �ּ� : %p, %p\n", &a, &b);
	printf("ap,bp �ּ� : %p, %p\n", &ap, &bp);

	printf("�ٲٱ� ���� a,b�� �� : %.1lf, %.1lf\n", a, b); //1.3 1.7 
	printf("�ٲٱ� ���� ap,bp�� �� : %.1lf, %.1lf\n", *ap, *bp); //1.3 1.7 
	printf("\n");

	temp = *ap; //ap�� ����Ű�� �ִ� a�� ���� �־��ش�. 
	*ap = *bp; // bp�� ����Ű�� �ִ� b�� ���� ap�� ������ �־��ش�. 
	*bp = temp; //ap�� ����Ű�� �ִ� a���� bp�� ������ �־��ش�.


	printf("�ٲ� ���� a,b�� �� : %.1lf, %.1lf\n", a, b); // 1.7 1.3 

	return 0;




}