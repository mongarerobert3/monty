#include "monty.h"

/**
 *pop - removes the top element of the stack
 *@stack: pointer to the stack to remove element from
 *@line_number: the line number in the monty file where
 *              this particular opcode is specified
 *
 *Return: void
 */
 
void pop(stack_t **stack, unsigned int line_number)
{
    stack_t *temp;

        /* if satck is empty, print an error message*/
	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
    /* a temp variable to point to the 2nd element in the stack */

    temp = (*stack)->next;

    /* make changes to the pointer */
    if ((*stack)->next != NULL)
		(*stack)->next->prev = NULL;
	free(*stack);              /* removes the top element */
	*stack = temp;             /* new top will be the 2nd element in the stack*/

}
