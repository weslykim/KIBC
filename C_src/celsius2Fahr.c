#include <stdio.h>

int main(void)
{
	int celsius;
	//celsius = 40;
	scanf("%d", &celsius);
	
	double fahr = (9.0 / 5.0 * 40 + 32);

	printf("celsius: %d ---> fahr : %.1f\n", celsius, fahr);
	return 0;
}
