#include <stdio.h>

int main() {
	//scanf �Լ��� ��ĭ�� ���Ե� ���ڿ��� �Է��� �� ����.
	//���ڿ��� ������� ���� �Լ��� ����Ѵ�.
	//�� ���� ��� �Է��ϴ� �Ѽ� gets
	//���ڿ��� ����ϴ� �Լ� puts

	char str[80];
	printf("���ڿ��� �Է��ϼ���:");
	gets(str);
	printf("�Էµ� ���ڿ�:");
	puts(str);


	return 0;
}