#include "monty.h"

/**
 * _pall - function that print all values on the stack from the top.
 * @stack: double pointer to the head of stack
 * @line_ctn: script line number.
 *
 * Return: No return.
 */

void pall(stack_t **stack, unsigned int line_cnt __attribute__((unused)))
{
	print_stack(*stack);
}
