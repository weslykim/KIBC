#include <stdio.h>

int main(void)
{
	int Num;
	scanf("%d", &Num);

	int isOdd = (Num % 2 == 1);
	//int isOdd = (Num % 2 != 0);
	//int isOdd = Num % 2;
	printf("num: %d --- is odd : %d\n", Num, isOdd);

	return 0;
}
