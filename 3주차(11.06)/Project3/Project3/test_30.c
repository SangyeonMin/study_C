#include <stdio.h>

void main() {

	//sizeof() : �ڷ����� ũ�⸦ ����ϴ� ������
	printf("%d����Ʈ\n", sizeof('V')); // ���� : 4����Ʈ why? ���ڻ���� 1byte�ε� 4byte�� ��°� ? ��ǻ�� ������ ������ (�����Ϸ��� ���� �ٲ�)
	printf("%d����Ʈ\n", sizeof(35)); // ���� : 4����Ʈ(�⺻)
	printf("%d����Ʈ\n", sizeof(1.65)); // �Ǽ� :  8����Ʈ(�⺻)
	printf("%d����Ʈ\n", sizeof(1.65f)); // f : float(4byte), �Ǽ����� 4byte�� ��� 
	printf("%d����Ʈ\n", sizeof("abcd")); // ���ڿ� :  4����Ʈ 
	printf("%d����Ʈ\n", sizeof("abcdef")); // ���ڿ� :  7����Ʈ (���ڰ� �þ������ byte����)
	printf("%d����Ʈ\n", sizeof("K")); // ���ڿ� :  2����Ʈ 
	printf("%d����Ʈ\n", sizeof(10/4)); // ����/����=����  4����Ʈ
	printf("%d����Ʈ\n", sizeof(10/4.0)); // ����/�Ǽ�=�Ǽ�  8����Ʈ 


}