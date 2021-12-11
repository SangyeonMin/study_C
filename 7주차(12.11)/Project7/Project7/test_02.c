#include <stdio.h>
//함수는 하나의 독립된 공간이다. (메모리에서 별도로 만들어진 공간) 
//도시로 하면 서울과 부산, 각 도시에 이름이 같은 사람이 있음 
//한 도시에서 같은 이름이 있으면 에러 
int add(int nA, int nB) {
	int nResult = 0; // 함수 안에서 선언된 변수를 지역변수라 하고 
	//함수 안에서만 사용 가능하고 함수 종료 시 사라짐 
	//int nResult = 0; 가 추가로 있을 경우 에러
	nResult = nA + nB;
	printf("%d\n", nResult);
	return nResult;

}

int main() {
	int nResult = 0;
	nResult = add(3, 4) + 10;
	printf("%d\n", nResult);

	return 0;
}