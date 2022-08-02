#include "include/gen.h"
#include <stdlib.h>
#include <string.h>

char	byte_to_char(unsigned char byte)
{
	return ((byte % (127 - 33)) + 33);
}

char	*gen_pass(t_passgen passgen)
{
	char	*pass;
	size_t	bufflen;

	pass = NULL;
	bufflen = passgen.len + 1;
	pass = malloc(sizeof(char) * (bufflen));
	if (!pass)
		return (NULL);
	memset(pass, 0, bufflen);
	getrandom(pass, passgen.len, 0);
	for (size_t i = 0; i < passgen.len; ++i)
		pass[i] = byte_to_char((unsigned char)(pass[i]));
	return (pass);
}

void	free_and_clean(char *pass, size_t len)
{
	if (!pass)
		return ;
	memset(pass, 0, len);
	free(pass);
}
