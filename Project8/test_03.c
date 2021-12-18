#include <stdio.h>

int main() {
	double a = 1.3;
	double b = 1.7;
	double* ap;
	double* bp;

	double temp;

	ap = &a; //a 주소 
	bp = &b; // b 주소 

	printf("a,b 주소 : %p, %p\n", &a, &b);
	printf("ap,bp 주소 : %p, %p\n", &ap, &bp);

	printf("바꾸기 전의 a,b의 값 : %.1lf, %.1lf\n", a, b); //1.3 1.7 
	printf("바꾸기 전의 ap,bp의 값 : %.1lf, %.1lf\n", *ap, *bp); //1.3 1.7 
	printf("\n");

	temp = *ap; //ap가 가르키고 있는 a의 값을 넣어준다. 
	*ap = *bp; // bp가 가르키고 있는 b의 값을 ap의 값으로 넣어준다. 
	*bp = temp; //ap가 가르키고 있는 a값을 bp의 값으로 넣어준다.


	printf("바꾼 후의 a,b의 값 : %.1lf, %.1lf\n", a, b); // 1.7 1.3 

	return 0;




}