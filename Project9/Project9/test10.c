#include<stdio.h>

double ary_avg(int*);

int main() {
	int ary[5];
	int i;
	double res;
	int* ap;

	ap = ary;
	// �ݺ����̿��Ͽ� ī����κ��� �����͸� �Է¹��� �� ��հ��
	for (i = 0; i < 5; i++) {
		scanf_s("%d", ap+i); 
	}

	res = ary_avg(ary);
	printf("�迭�� ����� : ");
	printf("%.2lf\n", res);

	return 0;
}

double ary_avg(int *ap) {
	int tot = 0;
	double avg;
	for (int i = 0; i < 5; i++) {
		tot += ap[i];

	}

	avg = tot / 5.0;
	return avg;
}