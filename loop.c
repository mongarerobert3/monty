#include <stdlib.h>
#include <stdio.h>
#include "monty.h"

char *line = NULL;
size_t size  = 0;
char *opcode = NULL;
unsigned int line_number = 1;
stack_t *stack = NULL;


while ((getline(&line, &size, fd)) != (-1))
{
   if (*line == '\n')
   {
        line_number ++;
        continue;
   }
   Arg.argument = strtok(NULL, "\t\n");
   run_opcode(opcode, &stack, line_number);
   line_number ++;
    
}

free(line);

/* free stack */
if (STACK != NULL)
{
    while (STACK != NULL)
    {
        temp = STACK;
        STACK = temp->next;
        free(temp);
    }
}
fclose(fd);
exit(EXIT_SUCCESS);
