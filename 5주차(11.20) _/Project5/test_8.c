#include<stdio.h>

void main() {
	int x = 0;
	int y = 0;

	while (y < 5) { //0,1,2,3,4 -> �� �ټ� �� while(x<4)�� �ݺ� 
		
		while (x < 4) { //0,1,2,3 -> �� 4 �� {��ȣ} ���� �ݺ�
			printf("*\t");   // \t �� �� -> *   *   *   * 
 			x++;
		}
		printf("\n"); 

		y++;
		//x = 0;
	}


}