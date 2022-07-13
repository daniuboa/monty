#include "monty.h"

/**
 * _queue - onverts stacks to a queue.
 * @stack: double pointer to the head of stack.
 * @line_number: script line number
 *
 * Return: No return.
 */
void _queue(stack_t **stack, unsigned int line_number)
{
	(*stack)->n = QUEUE;
	(void)line_number;
}
