#include "monty.h"

/**
 * the_mul - The function that multiples the top two elements of the stack
 * @stack: The pointer to the top of the stack
 * @line_number: is where the line number appears
 * Description: 8. mul
 * Return: see below
 * 1. is upon success, nothing
 * 2. is upon fail, EXIT_FAILURE
 */
void the_mul(stack_t **stack, unsigned int line_number)
{
	stack_t *first, *second;

	if ((*stack == NULL) || ((*stack)->next == NULL))
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		fclose(file);
		exit(EXIT_FAILURE);
	}
	else
	{
		first = *stack;
		second = first->next;
		second->n *= first->n;
		*stack = second;
		(*stack)->prev = NULL;
		free(first);
	}
}
