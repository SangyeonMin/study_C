#include <stdio.h>

void main() {
	int i;
	int age; 
	int sum=0;

	for (i = 1; i <=5; i++) {
		printf("%d.���̸� �Է��ϼ���:", i);
		scanf_s("%d", &age);
		sum = sum + age;	
	}

	printf("�ټ����� ��� ���̴� %.1lf�Դϴ�.", sum / 5.0);

}
