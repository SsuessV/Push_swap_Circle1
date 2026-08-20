/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_validation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 12:16:28 by suyoun            #+#    #+#             */
/*   Updated: 2026/08/20 12:57:44 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_valid_number(char *input)
{
	if (*input == '+' || *input == '-')
		input++; //after a sign
	if (*input == '\0')
		return (0);
	while (*input)
	{
		if (!('0' <= *input && *input <= '9')) //every character must be a digit
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

int	count_size(char **substr)
{
	int	size;

	size = 0;
	while (substr[size])
		size++;
	return (size);
}
