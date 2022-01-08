#include <stdio.h>

void showArayElem(int* p, int len);

int main() {
	int arr1[3] = { 1,2,3 };
	int arr2[5] = { 4,5,6,7,8 };
	
	showArayElem(arr1, sizeof(arr1) / sizeof(int));
	showArayElem(arr2, sizeof(arr2) / sizeof(int));

	return 0;
}

void showArayElem(int *param, int len) {
	int i;
	for (i = 0; i < len; i++) {
		printf("%5d", param[i]);
	}

	printf("\n");

}