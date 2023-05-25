#include "monty.h"

/**
 * go - Operators
 *
 * @op_f: Char pointer
 * @l: line
 * @stak: stack
 *
 * Return: is always on void
 */


void (*go(char *op_f, unsigned int l, stack_t **stak))(stack_t**, unsigned int)
{
	int count;

	instruction_t operation[] = {
		{"pall", the_pall},
		{"add", the_add},
		{"pint", the_pint},
		{"swap", the_swap},
		{"pop", the_pop},
		{"sub", the_sub},
		{"div", the_div},
		{"mul", the_mul},
		{"mod", the_mod},
		{"nop", the_nop},
		{"rotl", the_rotl},
		{"rotr", the_rotr},
		{"pchar", the_pchar},
		{"pstr", the_pstr},
		{NULL, NULL}
	};

	for (count = 0; operation[count].opcode != NULL; count++)
	{
		if (strcmp(operation[count].opcode, op_f) == 0)
		{
			return (operation[count].f);
		}
	}
	fprintf(stderr, "L%u: unknown instruction %s\n", l, op_f);
	fclose(file);
	get_free(*stak);
	exit(EXIT_FAILURE);
}
