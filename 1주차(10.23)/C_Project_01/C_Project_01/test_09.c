#include <stdio.h>

void main() {
	//1. ���� ����
	int bongbong, bonus, total; //���޾� ���� ���� ����
	double tax, real_incom; // double : �Ǽ� Ÿ�� 

	//2. �ʱ�ȭ 
	bongbong = 150;
	bonus = 60;

	//3. ���;
	total = bongbong + bonus; // �� ���Ծ�
	tax = total * 0.09; //���� (���� * �Ǽ� -> �Ǽ�)

	//�� ���Ծ� ���Ͻÿ�.
	real_incom = total - tax;

	//��� 
	printf("�̸����� �Ǽ��Ծ��� %lf �����Դϴ�", real_incom);
	// ���� ��� : %d, �Ǽ� ��� : %lf(���� ��, ����)

}