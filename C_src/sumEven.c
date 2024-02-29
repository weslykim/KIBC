#include <stdio.h>

int main(void)
{
	int sum;
	sum = 0;
	int N;
	N = 2;
	while(N<=100) {
		sum = sum + N;
		N = N + 2;
	
	}

	printf("sum even num[1, 100] : %d\n", sum);
	return 0;
}
