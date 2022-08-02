#include "include/types.h"
#include <string.h>

t_passgen	get_default_settings()
{
	t_passgen	dsettings;

	memset(&dsettings, 0, sizeof(t_passgen));
	dsettings.len = 8;

	return (dsettings);
}
