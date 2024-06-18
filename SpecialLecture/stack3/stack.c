#include "stack.h"
#include <stdlib.h>
#include <stdio.h>
/*struct stack
{
	int array[100];
	int tos;
};*/
void initStack(struct stack *ps)
{
	ps->tos = 0;

}
void push(struct stack *ps, int data)
{
	//stack[tos] = data;
	//++tos;
	if (ps->tos == ARRAYSIZE)
	{
		fprintf(stderr, "Stack is full\n");
		exit(1);
	}
	ps->array[ps->tos] = data;
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
	return ps->array[ps->tos];
}
