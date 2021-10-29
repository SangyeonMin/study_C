#include <stdio.h>

void main() {

	int hap; //변수 선언(정수 저장)
	int hap2; 
	int hap3 = 200; //변수 선언과 동시에 값 저장 
	hap = 100;
	printf("%d", hap); //결과 : 100 
	printf("\n");
	hap = 10 + 20; // 새로운 값이 들어가면 전에 있던 값을 덮어씀
	printf("%d", hap); //결과 : 30
	printf("\n");
	hap2 = hap;
	printf("%d   %d\n", hap, hap2); // 결과 : 30  30 (공백도 문자열)
	printf("%d", hap3); //결과 : 200

}