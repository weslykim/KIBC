#include <stdio.h>
#define PI 3.141592
int main(void)
{
	int radius;
	scanf("%d", &radius);
	
	double area = 3.14 * radius * radius;
	
	printf("area: %.2f\n", area);
	return 0;
}
