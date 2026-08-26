
#include "push_swap.h"

void	record_op(t_info *info, int *counter, char *name)
{
	(*counter)++;
	info->total_ops++;
	ft_printf("%s\n", name);
}