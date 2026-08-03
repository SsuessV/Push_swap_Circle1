/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_parsing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyoun <suyoun@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 14:44:13 by suyoun            #+#    #+#             */
/*   Updated: 2026/08/03 21:35:29 by suyoun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	parse_input(int argc, char **argv, t_stack *stack)
{
	char		**substr;
	int			*arr;
	int			size;

	substr = NULL;
	if (argc == 1)
		return ;
	if (argc == 2)
		substr = ft_split (argv[1], ' ');
	else
		substr = &argv[1];
	size = count_size(substr);
	arr = malloc(size * sizeof(int));
	if (!arr)
		print_error();
	validate_convert_fill(arr, substr, size);
	is_duplicate(arr, size);
	stack_init(stack, arr, size, size);
	free(arr);
	if (argc == 2)
		free_split(substr);
}

int	count_size(char **substr)
{
	int	size;

	size = 0;
	while (substr[size])
		size++;
	return (size);
}

void	validate_convert_fill(int *arr, char **substr, int size)
{
	int			i;
	long long	value;

	i = 0;
	while (i < size)
	{
		if ((is_valid_number(substr[i]) == 0))
			print_error();
		value = ft_atoll(substr[i]);
		if (is_inrange(value) == 0)
			print_error();
		arr[i] = (int)value;
		i++;
	}
}

long long	ft_atoll(const char *nptr)
{
	int			i;
	int			sign;
	long long	number;
	int			digit;

	i = 0;
	sign = 1;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	number = 0;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		digit = nptr[i] - '0';
		if (sign == 1 && number > (LLONG_MAX - digit) / 10)
			return (LLONG_MAX);
		if (sign == -1 && number > (-(LLONG_MIN + digit)) / 10)
			return (LLONG_MIN);
		number = number * 10 + digit;
		i++;
	}
	return (number * sign);
}

void	free_split(char **substr)
{
	int	i;

	i = 0;
	if (!substr)
		return ;
	while (substr[i])
	{
		free(substr[i]);
		i++;
	}
	free(substr);
}
