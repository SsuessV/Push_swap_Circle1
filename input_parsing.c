/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_parsing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyoun <suyoun@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 14:44:13 by suyoun            #+#    #+#             */
/*   Updated: 2026/07/21 21:27:17 by suyoun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	parse_input(int argc, char **argv)
{
	char		**numbers;
	long long	value; //check the data type
	int			i;

	numbers = NULL;
	i = 0;
	if (argc == 1)
		return ;
	if (argc == 2)
		numbers = ft_split (argv[1], ' ');
	else
		numbers = &argv[1];
	while (numbers[i])
	{
		if ((is_valid_number(numbers[i]) == 0))
			print_error();
		value = ft_atoll(numbers[i]);
		if (is_inrange(value) == 0)
			print_error();
		// create node here
		// add_to_stack((int)value);
		i++;
	}
	//after converting to long long, do the dup check
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

int	is_duplicate(int *stack, int size, int value)
{
}

void print_err(void)
{
	write(2, "Error\n", 6);
	exit(42); //any non zero value. return(0) = exit(0)
}
