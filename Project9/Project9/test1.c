#include <stdio.h>

void assign(); 

int main() {
	int cheoli = 0; 
	assign(&cheoli); // &cheoli �ּҸ� �Ѱ��ָ� ȣ�� 
	printf("�Լ��� ȣ��� �Ŀ� cheoli�� ����� �� : %d \n", cheoli);

	return 0;

}

void assign(int *ip) { // int main() �Լ��� cheoli�� �ּҰ��� �Ű������� ����
	// �Լ��� �޸𸮿� ���� �����̴�.
	// �Լ��� ȣ��� �۵��Ѵ�. 
	*ip = 100; // *ip�� ����Ű�� �ִ� cheoli (����)�ּҰ��� 100 ���� ����
}
