#include "monty.h"
/**
* free_stack - is the free a doubly linked list
* @head: indicate head of the stack
*/
void free_stack(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
