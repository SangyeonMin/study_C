#include <stdio.h>

int main() {
	double ary[] = { 1.5, 20.1, 16.4, 2.3, 3.5 };
	double tot = 0;
	double avg = 0;

	int i; 


	for ( i = 0; i < 5; i++) {
		//������ ���
		tot = tot + *(ary + i);  // �迭�� ���� �ּҰ��̴�.
	}

	avg = tot / 5;

	printf("��հ� : %.2f\n", avg);

	printf("�ι�° �迭�� ����? %f\n", *(ary+1)); //�� �迭�� ���� �ּҰ�
	return 0;


}