/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_parsing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyoun <suyoun@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 14:44:13 by suyoun            #+#    #+#             */
/*   Updated: 2026/07/21 15:10:38 by suyoun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	parse_input(int argc, char **argv)
{
	char	**numbers;

	numbers = NULL;
	if (argc == 1)
		return ;
	else if (argc == 2)
	{
		numbers = ft_split (argv[1], ' ');
	}
	else
	{
		
	}
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

int	is_range(char *input)
{
	long long	num;

	num = ft_atoll(input);
	if (num < INT_MIN || num > INT_MAX)
		return (0);
	return (1);
}

int	is_dupulicate(char *input)
{
	
}
