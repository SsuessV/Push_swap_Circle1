/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_validation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyoun <suyoun@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 12:16:28 by suyoun            #+#    #+#             */
/*   Updated: 2026/08/25 22:02:39 by suyoun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	validate_convert_fill(int *arr, char **substr, int size)
{
	int			i;
	long long	value;

	i = 0;
	while (i < size)
	{
		if ((is_valid_number(substr[i]) == 0))
			return (1);
		value = ft_atoll(substr[i]);
		if (is_inrange(value) == 0)
			return (1);
		arr[i] = (int)value;
		i++;
	}
	return (0);
}

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

int	is_duplicate(int *arr, int size)
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
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
