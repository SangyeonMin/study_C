#include <stdio.h>

int main() {
	int ages[5];
	int tot=0;
	double avg;
	int i;
	printf("�ټ� ���� ���̸� �Է��ϼ��� : ");

	for (i = 0; i < 5; i++) {
		// �� �迭��ҿ� ���� �Է�
		scanf_s("%d", &ages[i]); //%d �ڿ� ���� ���� �� ���� �Է� �� ����� ��� �ȵ�
	}

	for (i = 0; i < 5; i++) {
		// ��� �迭 ����� ���� ���� 
		tot += ages[i];
	}

	avg = tot / 5.0; // ��ճ��� ��� 
	printf("�Էµ� �ټ� ���� ���� : ");
	for (i = 0; i < 5; i++) {
		// �迭�� ����� �� ��� 
		printf("%d ", ages[i]);
 	}
	printf("\n�ټ� ���� ��� ���̴� %.1lf�Դϴ�\n", avg);

	return 0;
}