#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "list.h"

void initList(List *pList)
{
	pList->ptr = malloc(sizeof(Node));
	assert(pList->ptr );
	//pList->ptr->data = ???;			//dummy
	pList->ptr->next = NULL;
}

void cleanupList(List *pList)
{
	Node *p = pList->ptr;
	while (p )
	{
		Node *tmp = p;
		p = p->next;
		free(tmp);
	}
}

void insertFirstNode(List *pList, int data)
{
	Node *p = malloc(sizeof(Node));
	assert(p );
	p->data = data;
	p->next = pList->ptr->next;
	pList->ptr->next = p;
}

void insertNode(List *pList, int prevData, int data)
{
	Node *p = pList->ptr->next;
	while (p )
	{
		if (p->data == prevData)
		{
			break;
		}
		p = p->next;
	}
	if (p )
	{
		Node *p2 = malloc(sizeof(Node));
		assert(p2 );
		p2->data = data;
		p2->next = p->next;
		p->next = p2;
	}
}

void deleteNode(List *pList, int data)
{
	Node *p = pList->ptr->next;
	Node *p2 = pList->ptr;
	while (p )
	{
		if (p->data == data)
		{
			break;
		}
		p = p->next;
		p2 = p2->next;
	}
	if (p )
	{
		p2->next = p->next;
		free(p);
	}
}

void printList(const List *pList)
{
	Node *p = pList->ptr->next;
	printf("[");
	while (p )
	{
		printf("%d, ", p->data);
		p = p->next;
	}
	printf("]\n");
}
