/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_parsing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyoun <suyoun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 14:44:13 by suyoun            #+#    #+#             */
/*   Updated: 2026/08/26 20:49:55 by suyoun           ###   ########.fr       */
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
