/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_parsing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 14:44:13 by suyoun            #+#    #+#             */
/*   Updated: 2026/08/27 17:43:52 by bsurilla         ###   ########.fr       */
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
	arr = create_array(size);
	if (validate_convert_fill(arr, substr, size) || is_duplicate(arr, size))
		input_cleanup(arr, substr, argc, start);
	stack_init(stack, arr, size, size);
	if (!stack->numbers)
		return (0);
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

long long	ft_atoll(const char *str)
{
	int	sign;

	sign = 1;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	return (parse_number(str, sign));
}

long long	parse_number(const char *str, int sign)
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
			print_error();
		n = n * 10 + digit;
		str++;
	}
	if (sign < 0 && n == (unsigned long long)LLONG_MAX + 1)
		return (LLONG_MIN);
	if (sign < 0)
		return (-(long long)n);
	return ((long long)n);
}
