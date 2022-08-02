#include "include/args.h"

void	passgen_args_passlen(size_t argc, char **argv, void *data, size_t *i)
{
	if (*i + 1 < argc)
		((t_passgen *)data)->len = atoi(argv[++(*i)]);
}
