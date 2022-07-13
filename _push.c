#include "monty.h"

/**
 * _push - function that pushes an element to the stack.
 * @stack: double pointer to the head of stack.
 * @line_number: script line number.
 *
 * Return: void.
 */
void _push(stack_t **stack, unsigned int line_number)
{
	char *n = global.argument;

	if ((is_digit(n)) == 0)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_cnt);
		exit(EXIT_FAILURE);
	}

	if (global.data_struct == 1)
	{
		if (!add_node(stack, atoi(global.argument)))
		{
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		if (!queue_node(stack, atoi(global.argument)))
		{
			exit(EXIT_FAILURE);
		}
	}
}
