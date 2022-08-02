#ifndef TYPES_H
# define TYPES_H
# include <sys/types.h>

typedef struct s_passgen_settings {
	size_t	len;
}	t_passgen;

/**
 * Generate a t_passgen structure and initialize it with defaults values
 *
 * @return the default settings
 */
t_passgen	get_default_settings();

#endif
