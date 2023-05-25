#include "monty.h"

/**
 * get_pall - The function that prints all elements on the stack
 * @stack: The pointer to head of the stack
 * @line_number: where the instruction appears
 * Description: 0. push, pall
 * Return: see below
 * 1. is upon success, nothing
 * 2. is upon fail, EXIT_FAILURE
 */
void get_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current;

	(void)line_number;

	current = *stack;

	while (current != NULL)
	{
		printf("%d", current->n);
		current = current->next;
		printf("\n");
	}
}
