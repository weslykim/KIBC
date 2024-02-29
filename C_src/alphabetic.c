#include <stdio.h>

int main(void)
{
	char alpha;
	printf("input char : ");
	scanf("%c", &alpha);	
	
	int isAlpha = (alpha>= 'A' && alpha<= 'Z') || (alpha>= 'a' && alpha<= 'z');  
	
	printf("%c is alphabetic : %d\n", alpha, isAlpha);

	return 0;
}
