#include <stdio.h>

void main() {
	int nData = 10;
		
	//증감 연산자
	nData--; // nData=nData-1;
	--nData;
	nData++;
	++nData;

	printf("%d\n", nData); // 10
	printf("%d\n", ++nData); // 11 앞에 있으면 '먼저' 증가시키고 출력 
	printf("%d\n", nData++); // 11 뒤에 있으면 출력하고 '나중에' 증가
	printf("%d\n", nData); // 12

}