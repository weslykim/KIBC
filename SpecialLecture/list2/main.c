#include <stdio.h>
#include "list.h"

int main(void)
{
	List list;
	initList(&list);
	
	insertFirstNode(&list, 4);
	insertFirstNode(&list, 4);
	insertFirstNode(&list, 4);
	printList(&list);
	
	insertNode(&list, 1, 2);
	printList(&list);
	
	deleteNode(&list, 3);
	printList(&list);
	
	cleanupList(&list);
	
	return 0;
}
