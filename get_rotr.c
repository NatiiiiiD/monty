#include "monty.h"

/**
 *  get_rotr - Will rotate the right
 *
 *  @stack: is the stack
 *
 *  @line_number: Indicates the line number
 *
 *  Return: is always on void
 */
void get_rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *first, *last;

	(void)line_number;

	if ((*stack == NULL) || ((*stack)->next == NULL))
	{
		;
	}
	else
	{
		first = last = *stack;
		while (last->next)
		{
			last = last->next;
		}
		last->prev->next = NULL;
		last->prev = NULL;
		last->next = first;
		first->prev = last;
		*stack = last;
	}
}
