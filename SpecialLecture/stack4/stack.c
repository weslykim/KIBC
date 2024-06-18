#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void initStack(struct stack *ps, int size)
{
	ps->pArr = malloc(sizeof(int) * size);
	ps->size = size;
	ps->tos = 0;
}
void cleanupStack(struct stack *ps)
{
	free(ps->pArr);
}
void push(struct stack *ps, int data)
{
	//stack[tos] = data;
	//++tos;
	//if (ps->tos == ARRAYSIZE)
	if (ps->tos == ps->size)
	{
		fprintf(stderr, "Stack is full\n");
		exit(1);
	}
	ps->pArr[ps->tos] = data;
	++ps->tos;
}

int pop(struct stack *ps)
{
	if (ps->tos == 0)
	{
		fprintf(stderr, "Stack is empty\n");
		exit(2);
	}
	--ps->tos;
	
	return ps->pArr[ps->tos];
}
