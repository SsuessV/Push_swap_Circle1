
#include "push_swap.h"

int	is_valid_number(char *input)
{
	if (*input == '+' || *input == '-')
		input++;
	if (*input == '\0')
		return (0);
	while (*input)
	{
		if (!('0' <= *input && *input <= '9'))
			return (0);
		input++;
	}
	return (1);
}

int	is_inrange(long long n)
{
	if (n < INT_MIN || n > INT_MAX)
		return (0);
	return (1);
}

void	is_duplicate(int *arr, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] == arr[j])
				print_error();
			j++;
		}
		i++;
	}
}
