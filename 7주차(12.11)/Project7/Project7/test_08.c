#include <stdio.h>

//�ټ� ���� ������ ���� ū�� ã�� 
int main() {

	double nums[5];
	double max;
	int i;

	printf("�ټ� ���� ���ڸ� �Է��ϼ���. : ");

	for (i = 0; i < 5; i++) {
		scanf_s("%lf", &nums[i]);
	}

	max = nums[0]; //���� 

	for (i = 0; i < 5; i++) {

		if (max < nums[i]) 
			max = nums[i];	

	}

	printf("���� ū ���� : %.1lf�Դϴ�.",max);

	return 0;
}