#include "monty.h"

/**
 * _stack - Converts a queue to a stack.
 * @stack: double pointer to the head of stack.
 * @line_number: script line number
 *
 * Return: No return.
 */
void _stack(stack_t **stack, unsigned int line_number)
{
	(*stack)->n = STACK;
	(void)line_number;
}
