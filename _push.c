#include "monty.h"

/**
 * _push - function that pushes an element to the stack.
 * @stack: double pointer to the head of stack.
 * @line_number: script line number.
 *
 * Return: No return.
 */
void _push(stack_t **stack, unsigned int line_number)
{
	stack_t *new = NULL;
	(void)line_number;

	new = new_Node(value);

	new->next = *stack;
	if (*stack != NULL)
		(*stack)->prev = new;
	*stack = new;
}
