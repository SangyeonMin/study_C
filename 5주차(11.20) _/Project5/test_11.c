#include <stdio.h>

void main() {
	int nData = 10; 
	int nNewData = 20;
	int nResult = 0;

	printf("%d\n", ++nData); //11  
	printf("%d\n", nData++); // 11 (nData : 12����)

	nResult = ++nData + nNewData++;   //13 + 20 (nNewData : 21����)

	printf("%d\n", nResult); //33
	printf("%d\n", nNewData); // 21

}
