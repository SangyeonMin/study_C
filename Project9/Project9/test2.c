#include <stdio.h>

void exchange(int* cp, int* mp);//�Լ� ���� ����

int main() {
	int cheoli = 10, metel = 20;

	exchange(&cheoli, &metel);
	printf("%d %d", cheoli, metel);
	return 0;

}

void exchange(int *cp , int *mp) {
	//������ �Ű� ���� ���

	int temp;
	temp = *cp; 
	*cp = *mp;
	*mp = temp;
}