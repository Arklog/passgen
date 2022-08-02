#include "include/types.h"
#include "include/args.h"
#include "include/gen.h"
#include "libargs/args.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	t_passgen	passgen;
	char		*pass;
	passgen = get_default_settings();

	args_add_arg((t_arg) {
			.fullname = "len",
			.shortname = 'l',
			.data = &passgen,
			.callback = passgen_args_passlen
			});

	parse_args(argc, argv);

	pass = gen_pass(passgen);
	if (!pass)
		return (1);
	printf("%s\n", pass);
	free_and_clean(pass, passgen.len + 1);
}
