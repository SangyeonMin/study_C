#include <stdio.h>

void main() {
	// ����� ������� �ǿ������� ���¿� ����

	int result;
	double result2;

	result = 10 / 4;
	printf("result=%d\n", result); //��� : 2

	//������ ���ο� �� �Է�
	result = 10 / 4.0; //10.0 / 4.0 ==> 2.5
	printf("result=%d\n", result); //��� : 2 (result �ڷ����� int ����)
	
	result2 = 10 / 4.0; //10.0 / 4.0 ==> 2.5
	printf("result=%lf\n", result2); //��� : 2.5 (result1 �ڷ����� double �Ǽ�)
	printf("result=%d\n", result2); //��� : 0 
	//�߿�! ����ϰ��� �ϴ� ���� ��ȯ ���ڿ��� ��ġ���Ѿ� �Ѵ�

}