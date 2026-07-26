/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_parsing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 14:44:13 by suyoun            #+#    #+#             */
/*   Updated: 2026/07/26 20:16:33 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*parse_input(int argc, char **argv)
{
	char		**numbers;
	int			*arr;
	int			size;

	numbers = NULL;
	if (argc == 1)
		return (NULL);
	if (argc == 2)
		numbers = ft_split (argv[1], ' ');
	else
		numbers = &argv[1];
	size = count_size(numbers);
	arr = malloc(size * sizeof(int));
	if (!arr)
		print_error();
	validate_convert_fill(arr, numbers, size);
	is_duplicate(arr, size);
	if (argc == 2)
		free_split(numbers); 
	return (arr);
}

int	count_size(char **numbers)
{
	int	size;

	size = 0;
	while (numbers[size])
		size++;
	return (size);
}

void	validate_convert_fill(int *arr, char **numbers, int size)
{
	int			i;
	long long	value;

	i = 0;
	while (i < size)
	{
		if ((is_valid_number(numbers[i]) == 0))
			print_error();
		value = ft_atoll(numbers[i]);
		if (is_inrange(value) == 0)
			print_error();
		arr[i] = (int)value;
		i++;
	}
}

void	print_error(void)
{
	write(2, "Error\n", 6);
	exit(42); //any non zero value. return(0) = exit(0)
}
