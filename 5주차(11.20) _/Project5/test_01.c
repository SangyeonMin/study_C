#include <stdio.h> 

void main() {
	// �ݺ��� (do~while , while, for) 
	int nInput = 0;
	scanf_s("%d", &nInput);

	while (nInput > 0) { //while(����) : �� , ���� 
		printf("%dth printf()\n", nInput);
		nInput--; //nInput = nInput-1;

	}
}