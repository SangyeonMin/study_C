#include <stdio.h>


int main() {
	
	int val = 10;//지역변수
	
	{
		int val = 20;
		{
			val++;
		}

		printf("val=%d\n", val);
	
	}

	printf("val=%d",val);
	return 0;


}