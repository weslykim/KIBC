#include "stack.h"

/*struct stack
{
	int array[100];
	int tos;
};*/

void push(struct stack s, int data)
{
	//stack[tos] = data;
	//++tos;
	s.array[s.tos] = data;
	++s.tos;
}

int pop(struct stack s)
{
	--s.tos;
	return s.array[s.tos];
}
