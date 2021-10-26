#include "minirt.h"

void	error_exit(int ret)
{
	if (ret == -1)
		write(3, "Error: Can't allocate memory for new element\n", 46);
	exit(ret);
}
