#include <stdio.h>
//�Լ��� �ϳ��� ������ �����̴�. (�޸𸮿��� ������ ������� ����) 
//���÷� �ϸ� ����� �λ�, �� ���ÿ� �̸��� ���� ����� ���� 
//�� ���ÿ��� ���� �̸��� ������ ���� 
int add(int nA, int nB) {
	int nResult = 0; // �Լ� �ȿ��� ����� ������ ���������� �ϰ� 
	//�Լ� �ȿ����� ��� �����ϰ� �Լ� ���� �� ����� 
	//int nResult = 0; �� �߰��� ���� ��� ����
	nResult = nA + nB;
	printf("%d\n", nResult);
	return nResult;

}

int main() {
	int nResult = 0;
	nResult = add(3, 4) + 10;
	printf("%d\n", nResult);

	return 0;
}