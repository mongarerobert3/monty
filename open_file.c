#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

FILE *fd;

fd = fopen(argv[1], "r");
if (!fd)
{
	fprintf(stderr, "Error: Can't open file %s\n", file);
		exit(EXIT_FAILURE);
}
