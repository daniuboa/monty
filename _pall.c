#include "monty.h"

/**
 * _pall - function that print all values on the stack from the top.
 * @stack: double pointer to the head of stack
 * @line_number: script line number.
 *
 * Return: No return.
 */
void _pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current = NULL;
	(void)n;

	current = *stack;

	while (current != NULL)
	{
		dprintf(STDOUT_FILENO, "%d\n", current->n);
		current = current->next;
	}
}
