#include<stdio.h>

void main() {
	int x = 0;
	int y = 0;

	while (y < 5) { //0,1,2,3,4 -> ÃÑ ´Ù¼¸ ¹ø while(x<4)¹® ¹Ýº¹ 
		
		while (x < 4) { //0,1,2,3 -> ÃÑ 4 ¹ø {°ýÈ£} ³»¿ë ¹Ýº¹
			printf("*\t");   // \t ´Â ÅÇ -> *   *   *   * 
 			x++;
		}
		printf("\n"); 

		y++;
		//x = 0;
	}


}