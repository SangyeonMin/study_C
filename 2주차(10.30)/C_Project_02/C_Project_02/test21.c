#include <stdio.h>

void main() {
	int num1 = 3, num2 = 4;
	double divResult;

	divResult = num1 / num2;
	printf("������ ��� : %lf\n", divResult); //��� : 0.000000


	// ����ȯ ������( )
	// ������ �ѹ� �����ϸ� Ÿ���� ���� ������ �ʴ´�.
	divResult = (double)num1 / num2; // 3.0 /4 ==> 3.0 / 4.0
	printf("������ ��� : %lf\n", divResult); //��� : 0.750000
}