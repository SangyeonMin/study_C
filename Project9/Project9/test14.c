#include <stdio.h>

int main() {
	char str1[] = "My String"; //�迭 (�� ���� �Ұ�)
	char* str2 = "Your String"; // ������ ����  (�� ���� ����)
	printf("%s\n", str1);
	printf("%s\n", str2);

	
	str2 = "Our String";
	printf("%s\n", str1);
	printf("%s\n", str2);


	str1[0] = 'x'; //�迭 ��ġ�� ���� ���� ���� 
	//str2[0] = 'x';  ��� �ȳ��� //���� = �� 
	//str2[0]�� �ּҸ� ������ �ִ� ����, str2[0]�� �ּҰ��� ������ ����
	printf("%s\n", str1);

	printf("%s\n", str2);
	printf("%c\n", str2[0]);

	

	return 0;

}