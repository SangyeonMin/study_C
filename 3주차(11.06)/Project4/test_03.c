#include<stdio.h>

void main() {
	printf("1234567890123457890\n");

	printf("%10c\n", 'A');
	printf("%10d\n", 128);

	printf("%10lf\n", 3.1415926);
	printf("%10le\n", 3.1415926);

	printf("%10.3lf\n", 3.1415926); // 소수점 세자리 표현, 오른쪽 정렬
	printf("%10.5s\n", "Love is"); // 소수점 다섯자리 표현, 오른쪽 정렬
	printf("%10.7s\n", "Love is");
	printf("%5lf\n", 3.141); //왼쪽 정렬인 이유는 3.141000 -> 8자리 표현 , 초과하여 왼쪽정렬??
	printf("%5lf\n", 3.1415926);


}
