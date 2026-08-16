/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyoun <suyoun@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 18:42:53 by suyoun            #+#    #+#             */
/*   Updated: 2026/08/16 21:11:40 by suyoun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void radix_sort(t_stack *stack_a, t_stack *stack_b)
{
	
}

int *copy_values(t_numbers *numbers, int size)
{
	int	*copied;
	int	i;

	copied = malloc(size * sizeof(int));
	if (!copied)
		return (NULL);
	i = 0;
	while (i < size)
	{
		copied[i] = numbers[i].value;
		i++;
	}
	return (copied);
}

void normalize(t_numbers *numbers, int size)
{
	int	*copied;
	int	i;

	copied = copy_values(numbers, size); //copy the array for the presorting
	if (!copied)
		return ;
	selection_sort_array(copied, size); //sort the numbers inside the copied array
	i = 0;
	while (i < size) //find n store each values rank in the struct
	{
		numbers[i].rank = find_rank(numbers[i].value, sorted, size);
		i++;
	}
	free(copied);
}

int find_rank(int value, int *sorted, int size)
{
	
}

void selection_sort_array(int *array, int size)
{
	
}
