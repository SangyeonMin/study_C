#include <stdio.h>

void exchange(int* cp, int* mp);//함수 원형 선언

int main() {
	int cheoli = 10, metel = 20;

	exchange(&cheoli, &metel);
	printf("%d %d", cheoli, metel);
	return 0;

}

void exchange(int *cp , int *mp) {
	//포인터 매개 변수 사용

	int temp;
	temp = *cp; 
	*cp = *mp;
	*mp = temp;
}