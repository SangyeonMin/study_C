#include <stdio.h> 

int main() {
	char* name;
	name = "Hong gildong"; //���ڿ��� ���������� �迭ó�� ó���ȴ� 

	printf("�̸� : %s\n", name);

	//6��° ���� g ���
	printf("6��° ���� : %c\n", *(name+5));
	printf("6��° ���� : %c\n", name[5]); 
	
}