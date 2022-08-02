#ifndef GEN_H
# define GEN_H
# include "include/types.h"
# include <sys/random.h>

/**
 * Convert a byte to a printable character
 *
 * @param byte		the byte to transform
 *
 * @return a printable character
 */
char	byte_to_char(unsigned char byte);

/**
 * Generate a password with given parameters
 *
 * @param passgen	password generation parameters
 *
 * @return a password
 */
char	*gen_pass(t_passgen passgen);

/**
 * Free given memory and erase it
 *
 * @param pass		the password to clean
 * @param len		lenght of the buffer in bytes
 */
void	free_and_clean(char *pass, size_t len);

#endif
