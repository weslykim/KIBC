#include <stdio.h>
#include "stack.h"

/*struct stack
{
	int array[100];
	int tos;
};*/


int main(void)
{
	struct stack s1, s2;
	//struct stack stacks[20];
	
	push(s1, 100);
	push(s1, 200);
	push(s1, 300);
	
	printf("s1 1stpop() : %d\n", pop(s1));
	printf("s1 2ndpop() : %d\n", pop(s1));
	printf("s1 3rdpop() : %d\n", pop(s1));
	
	push(s2, 900);
	push(s2, 800);
	push(s2, 700);
	
	printf("s2 1stpop() : %d\n", pop(s2));
	printf("s2 2ndpop() : %d\n", pop(s2));
	printf("s2 3rdpop() : %d\n", pop(s2));

	return 0;
}

