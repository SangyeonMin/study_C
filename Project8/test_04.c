#include <stdio.h>

int main() {
	char* pszData = "Test string!"; //* = ��  
	//���ڿ��� ����Ʈ ������ �����ϴ� �����? 
	// "Test string!"�� �迭 ������ �� [T|e|s|t| |s|t|r|i|n|g|!|\0]
	//�迭������ ����� ���µ� > �޸� ���� �ּ�[0]��°�� ����Ű�� ���� Ÿ���� char >  

	printf("[%p]%c\n", pszData, *pszData); //�ּ� , * �ּҰ� ����Ű�� �� 
	printf("[%p]%c\n", pszData + 1, *(pszData+1)); //�����ּҷ� ���� �� ĭ ������ �� ���ּ� ������ 1�� ���Ѵٴ� ���� �ƴ� (100������ 101������ �Ǵ°� �ƴ�)
	printf("[%p]%c\n", pszData+5, *(pszData+5));  
	printf("[%p]%c\n", pszData+11, *(pszData+11)); 

	return 0;

}