#include <stdio.h>

int main() {
	char* pszData = "Test string!"; //* = 값  
	//문자열을 포인트 변수에 대입하는 방법은? 
	// "Test string!"은 배열 구조로 들어감 [T|e|s|t| |s|t|r|i|n|g|!|\0]
	//배열구조로 만들어 지는데 > 메모리 시작 주소[0]번째가 가르키는 값은 타입이 char >  

	printf("[%p]%c\n", pszData, *pszData); //주소 , * 주소가 가르키는 값 
	printf("[%p]%c\n", pszData + 1, *(pszData+1)); //시작주소로 부터 한 칸 떨어진 곳 ※주소 번지에 1을 더한다는 뜻이 아님 (100번지가 101번지가 되는게 아님)
	printf("[%p]%c\n", pszData+5, *(pszData+5));  
	printf("[%p]%c\n", pszData+11, *(pszData+11)); 

	return 0;

}