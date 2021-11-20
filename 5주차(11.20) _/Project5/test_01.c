#include <stdio.h> 

void main() {
	// 반복문 (do~while , while, for) 
	int nInput = 0;
	scanf_s("%d", &nInput);

	while (nInput > 0) { //while(조건) : 참 , 거짓 
		printf("%dth printf()\n", nInput);
		nInput--; //nInput = nInput-1;

	}
}