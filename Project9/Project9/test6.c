#include <stdio.h>

void ary_prn(int* ap); //�ݵ�� ��������� �������� ary_prn�� ���ǵ��� �ʾҽ��ϴٶ�� �� 

int main() {
	int ary[5] = { 10,20,30,40,50 };

	ary_prn(&ary); 
	return 0;
}

void ary_prn(int* ap) {
	// �ݺ������� ó��

	for (int i = 0; i < 5; i++) {
		// �ٸ� ��� printf("%5d ", ap[i]);
		//�ٽ� �����ϱ� ! �迭�� �����ּ�, �����͵� �����ּҶ� ap[i] �� ����
		
	}

}