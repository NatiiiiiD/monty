#include "monty.h"

/**
 * get_pint - The function that prints the top element on the stack
 * @stack: The pointer to head of the stack
 * @line_number: is where the instruction appears
 * Description: 1. pint
 * Return: see below
 * 1.is upon success, nothing
 * 2.is upon fail, EXIT_FAILURE
 */
void get_pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		fclose(file);
		get_free(*stack);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
