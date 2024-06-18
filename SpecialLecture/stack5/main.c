#include <stdio.h>
#include "stack.h"
#include <stdlib.h>


int main(void)
{
	Stack s1, s2;
	//struct stack stacks[20];
	//s1.tos = 0;
	//s2.tos = 0;
	initStack(&s1, 10, sizeof(int));
	initStack(&s2, 100, sizeof(double));
	
	int i;
	i = 100;
	
	push(&s1, &i);
	
	i = 200;
	push(&s1, &i);
	
	i = 300;
	push(&s1, &i);
	
	int re;
	pop(&s1, &re);
	pop(&s1, &re);
	pop(&s1, &re);
	
	printf("s1 1stpop() : %d\n", re);
	printf("s1 2ndpop() : %d\n", re);
	printf("s1 3rdpop() : %d\n", re);
	
	double d;
	d = 1.1;
	push(&s2, &d);
	push(&s2, &d);
	push(&s2, &d);
	
	double re2;
	pop(&s2, &re2);
	pop(&s2, &re2);
	pop(&s2, &re2);
	
	printf("s2 1stpop() : %f\n", re2);
	printf("s2 2ndpop() : %f\n", re2);
	printf("s2 3rdpop() : %f\n", re2);
	
	cleanupStack(&s1);
	cleanupStack(&s2);

	return 0;
}

