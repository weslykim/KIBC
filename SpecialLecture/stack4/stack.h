#ifndef STACK_H
#define STACK_H
//#define ARRAYSIZE 100
struct stack
{
	//int array[ARRAYSIZE];
	int *pArr;
	int size;
	int tos;
};

void initStack(struct stack *ps, int size);
void cleanupStack(struct stack *ps);
void push(struct stack *ps, int data);
int pop(struct stack *ps);

#endif
