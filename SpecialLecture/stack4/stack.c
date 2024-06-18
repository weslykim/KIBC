#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#include <assert.h>

void initStack(Stack *ps, int size)
{
	ps->pArr = malloc(sizeof(int) * size);
	ps->size = size;
	ps->tos = 0;
}
void cleanupStack(Stack *ps)
{
	free(ps->pArr);
}
void push(Stack *ps, int data)
{
	//stack[tos] = data;
	//++tos;
	//if (ps->tos == ARRAYSIZE)
	/*if (ps->tos == ps->size)
	{
		fprintf(stderr, "Stack is full\n");
		exit(1);
	}*/
	
	assert(ps->tos != ps->size);
	ps->pArr[ps->tos] = data;
	++ps->tos;
}
void pop(Stack *ps, int *pData)
{
	assert(ps->tos != 0);

	--ps->tos;
	
	*pData = ps->pArr[ps->tos];
/*int pop(Stack *ps)
{
	/*if (ps->tos == 0)
	{
		fprintf(stderr, "Stack is empty\n");
		exit(2);
	}*/
	//--ps->tos;
	//assert(ps->tos != 0);
	
	//return ps->pArr[ps->tos];

