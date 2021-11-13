#include<stdio.h>

void main() {
	int nData = 10, nNewData = 20;
	int x = 0, y = 0;

	printf("%d\n", !nData && nNewData); //0
	printf("%d\n", !(nData && x)); //1
	printf("%d\n", !nData || x); // 0
	printf("%d\n", x || !y); //1 
	printf("%d\n", !(x && !y)); //1 

}