#include <stdio.h>


void main() {
	int sum=0; 
	int n=0;

	while (1) { //���ѹݺ� 
 		
		printf("0�Ǵ� ������� �Է��ϼ��� : ");
		scanf_s("%d", &n);
		// sum = sum + n;
		if (n < 0)
			break; //�Էµ� ���� �����̸� �ݺ����� ����������.
		sum += n;
		
	}
	printf("�� ���� ������ �� :%d\n", sum);

}