#include <stdio.h>

int main(void)
{
	int base;
	int height;
	double area;

	scanf("%d" "%d", &base , &height);
	
	area = 1.0 / 2.0 * base * height;
	
	printf("base: %d, height: %d ---> area : %.1f\n" , base, height, area); 

	return 0;
}
