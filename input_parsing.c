/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_parsing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyoun <suyoun@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 14:44:13 by suyoun            #+#    #+#             */
/*   Updated: 2026/08/25 22:01:36 by suyoun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	parse_input(int argc, char **argv, t_stack *stack, t_info *info)
{
	char		**substr;
	int			*arr;
	int			size;
	int			start;

	if (argc == 1)
		return (0);
	start = starting_index(argc, argv, info);
	if (argc - start == 0)
		return (0);
	substr = get_substr(argc, argv, start);
	if (!substr || !substr[0])
		print_error();
	size = count_size(substr);
	arr = malloc(size * sizeof(int));
	if (!arr)
		print_error();
	if (validate_convert_fill(arr, substr, size) || is_duplicate(arr, size))
		input_cleanup(arr, substr, argc, start);
	stack_init(stack, arr, size, size);
	free(arr);
	if (argc - start == 1)
		free_split(substr);
	return (1);
}

char	**get_substr(int argc, char **argv, int start)
{
	char		**substr;

	substr = NULL;
	if (argc - start == 1)
		substr = ft_split (argv[start], ' ');
	else
		substr = &argv[start];
	return (substr);
}

int	count_size(char **substr)
{
	int	size;

	size = 0;
	while (substr[size])
		size++;
	return (size);
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
