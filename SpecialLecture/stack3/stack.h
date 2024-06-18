#ifndef STACK_H
#define STACK_H
#define ARRAYSIZE 100
struct stack
{
	int array[ARRAYSIZE];
	int tos;
};

void push(struct stack s, int data);
int pop(struct stack s);

#endif
