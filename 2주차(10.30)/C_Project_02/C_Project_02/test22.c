#include <stdio.h>

void main() {
	int history, letters, art;
	int total;
	double average;
	
	printf("����,����,���� ������ �Է��ϼ��� : ");
	scanf_s("%d %d %d", &history, &letters, &art);

	total = history + letters + art;
	average = (double)total / 3; // �Ǵ� total / 3.0

	printf("������ %d�̰� ����� %lf�Դϴ�.\n", total, average);

}