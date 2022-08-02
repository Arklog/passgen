#ifndef LIBARGS_H
# define LIBARGS_H
# include <sys/types.h>

typedef struct arg_data {
	char	*fullname;
	char	shortname;
	void	*data;
	void	(*callback)(size_t argc, char **argv, void *data, size_t *i);
} t_arg;

/**
 * Add an argument to be parsed at parse_args call
 *
 * @param arg argument datas
 */
void	args_add_arg(t_arg arg);

/**
 * Find an argument by it's shortname and store it in
 * buff if buff is not null
 *
 * @param shortname	argument's shortname
 * @param buff		buffer for argument
 *
 * @return 1 if found, 0 else
 */
int	args_find_by_shortname(char shortname, t_arg *buff);

/**
 * Find an argument by it's fullname and store it in
 * buff if buff is not null
 *
 * @param shortname	argument's fullname
 * @param buff		buffer for argument
 *
 * @return 1 if found, 0 else
 */
int	args_find_by_fullname(char *fullname, t_arg *buff);

int	args_find(char *name, t_arg *buff);

void	parse_args(int argc, char **argv);

void	args_free();
#endif
