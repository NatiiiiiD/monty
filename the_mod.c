#include "monty.h"

/**
 * the_mod - The function that finds the modulus of top two elements
 * @stack: The pointer to the top of the stack
 * @line_number: is where the line number appears
 * Description: 9. mod
 * Return: see below
 * 1. is upon success, nothing
 * 2. is upon fail, EXIT_FAILURE
 */
void the_mod(stack_t **stack, unsigned int line_number)
{
	stack_t *first, *second;

	if ((*stack == NULL) || ((*stack)->next == NULL))
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		fclose(file);
		get_free(*stack);
		exit(EXIT_FAILURE);
	}
	else if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		fclose(file);
		get_free(*stack);
		exit(EXIT_FAILURE);
	}
	else
	{
		first = *stack;
		second = first->next;
		second->n %= first->n;
		*stack = second;
		(*stack)->prev = NULL;
		free(first);
	}
}
