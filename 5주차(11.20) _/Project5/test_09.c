#include <stdio.h>

void main() {
	int nData = 10;
		
	//���� ������
	nData--; // nData=nData-1;
	--nData;
	nData++;
	++nData;

	printf("%d\n", nData); // 10
	printf("%d\n", ++nData); // 11 �տ� ������ '����' ������Ű�� ��� 
	printf("%d\n", nData++); // 11 �ڿ� ������ ����ϰ� '���߿�' ����
	printf("%d\n", nData); // 12

}