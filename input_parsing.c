/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_parsing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyoun <suyoun@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 14:44:13 by suyoun            #+#    #+#             */
/*   Updated: 2026/08/28 01:39:01 by suyoun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	parse_input(int argc, char **argv, t_stack *stack, t_info *info)
{
	int			*arr;
	int			size;
	int			start;

	if (argc == 1)
		return (0);
	start = starting_index(argc, argv, info);
	if (argc - start == 0)
		return (0);
	if (argc - start == 1 && (argv[start][0] == '\0'
		|| ft_strchr(argv[start], ' ')))
		return (print_error (), 0);
	size = argc - start;
	arr = create_array(size);
	if (!arr)
		return (0);
	if (validate_convert_fill(arr, &argv[start], size)
		|| is_duplicate(arr, size))
		return (input_cleanup(arr), 0);
	if (!stack_init(stack, arr, size, size))
		return (free(arr), 0);
	free(arr);
	return (1);
}

int	*create_array(int size)
{
	int	*arr;

	arr = malloc(size * sizeof(int));
	if (!arr)
		print_error();
	return (arr);
}
/*
int	count_size(char **substr)
{
	int	size;

	size = 0;
	while (substr[size])
		size++;
	return (size);
}*/

long long	ft_atoll(const char *str, int *error)
{
	int			i;
	int			sign;

	i = 0;
	sign = 1;
	*error = 0;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	return (parse_number(str, sign, error));
}

long long	parse_number(const char *str, int sign, int *error)
{
	unsigned long long	n;
	unsigned long long	limit;
	unsigned long long	digit;

	n = 0;
	if (sign < 0)
		limit = (unsigned long long)LLONG_MAX + 1;
	else
		limit = LLONG_MAX;
	while (*str >= '0' && *str <= '9')
	{
		digit = (unsigned long long)(*str - '0');
		if (n > (limit - digit) / 10)
		{
			*error = 1;
			return (0);
		}
		n = n * 10 + digit;
		str++;
	}
	return (n * sign);
}
