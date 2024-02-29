#include <stdio.h>

int main(void)
{
	int num;
	scanf("%d", &num);
	
//	if(num % 2 /* == 1 */)	{
//	printf("%d is a odd\n", num);
	
//	}else{
//	printf("%d is a even\n", num);
//	}

	printf("%d is a %s number\n", num, (num % 2 ==1) ? "odd" : "even");	
	return 0;
}
