#include <stdio.h>

int main(void)
{
	int sum;
	sum = 0;
	int num;
	num = 1;
	while(num<=10) {
		sum = sum + num;
	++num;
	}

	printf("sum[1, 10] : %d\n", sum);
	return 0;
}
