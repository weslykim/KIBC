#include "stack.h"

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
	ps->array[ps->tos] = data;
	++ps->tos;
}

int pop(struct stack *ps)
{
	--ps->tos;
	return ps->array[ps->tos];
}
