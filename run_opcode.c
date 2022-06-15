#include "monty.h" /* our header file--- check end of article*/

/**
 *run_opcode - executes a particular function that
 *             implements a monty byte code opcode
 *@opcode: the name of the opcode to execute
 *@stack: the stack where the opcode will be implemented on
 *@line_number: the line number in the byte code file
 *              that contains this particular opcode
 *
 *Return: void
 */

void run_opcode(char *opcode, stack_t **stack, unsigned int line_number)
{
    int i;
    instruction_t opcode_list[] = OPCODES; /* OPCODES = a MACRO defined in our header file holding the list of known stack operations */

    i = 0;
    while (opcode_list[i].opcode)
    {
        if (strcmp(opcode_list[i].opcode, opcode) == 0)
        {
            opcode_list[i].f(stack, line_number);
            return;
        }
        i++;
    }
    fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
    exit(EXIT_FAILURE);
}