#include <stdio.h>
#include "stack.h"
#include <stdlib.h>

void f(int *p)
{
	*p = 100;
}

int main(void)
{
	Stack s1, s2;
	//struct stack stacks[20];
	//s1.tos = 0;
	//s2.tos = 0;
	initStack(&s1, 10);
	initStack(&s2, 100);
	
	push(&s1, 100);
	push(&s1, 200);
	push(&s1, 300);
	
	int re;
	pop(&s1, &re);
	pop(&s1, &re);
	pop(&s1, &re);
	
	printf("s1 1stpop() : %d\n", re);
	printf("s1 2ndpop() : %d\n", re);
	printf("s1 3rdpop() : %d\n", re);
	
	push(&s2, 900);
	push(&s2, 800);
	push(&s2, 700);
	
	pop(&s2, &re);
	pop(&s2, &re);
	pop(&s2, &re);
	
	printf("s2 1stpop() : %d\n", re);
	printf("s2 2ndpop() : %d\n", re);
	printf("s2 3rdpop() : %d\n", re);
	
	cleanupStack(&s1);
	cleanupStack(&s2);

	return 0;
}

