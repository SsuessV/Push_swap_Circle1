/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 18:30:20 by bsurilla          #+#    #+#             */
/*   Updated: 2026/08/16 22:03:42 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf/ft_printf.h"

void	chunk_sort (t_stack *stack)
{
	int size;
	int	start;
	int	end;
	
	size = chunk_range (stack);
	start = 0;
	end = start + size; 

	start = end;
	end = end + size;
}


int	chunk_range(t_stack *stack)
{
	int	chunk_amount;
	int	chunk_size;
	
	if(!stack || stack->size == 0)
		return(0);
	chunk_amount = ft_sqrt(stack->size);
	chunk_size = stack->size / chunk_amount;
	return (chunk_size);
}

int	current_selection(t_stack *stack, int start, int end)
{
	int	i;
	int rank;
	int	selected_index;

	selected_index = -1;
	i = 0;
	if (!stack || stack->size == 0)
		return (-1);
	while (i < stack->size)
	{
		rank = stack->numbers[i].rank;
		if (rank >= start && rank < end)
		{
			selected_index = i;
			break ;
		}	
		i++;
	}
	return (selected_index);
}

void	get_to_top(t_stack *stack, int selected_index)
{
	int	rotations;
	
	if (!stack || selected_index < 0)
		return ;
	if (selected_index <= stack->size / 2)
	{
		rotations = selected_index;
		while (rotations--)
			rotate(stack);
	}
	else
	{
		rotations = stack->size - selected_index;
		while (rotations--)
			reverse_rotate(stack);
	}
}

int	ft_sqrt(int size)
{
	int	i;

	i = 1;
	if (size < 0)
		return (0);
	if (size == 0)
		return (0);
	while (i * i <= size)
	{
		if (i * i == size)
			return (i);
		i++;
	}
	return (i - 1);
}
