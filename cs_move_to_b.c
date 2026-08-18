/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cs_move_to_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 11:31:28 by bsurilla          #+#    #+#             */
/*   Updated: 2026/08/18 14:40:01 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_chunks_to_b (t_stack *stack_a, t_stack *stack_b)
{
	int size;
	int	start;
	int	end;
	int	current;
	
	if(!stack_a || !stack_b)
		return ;
	size = chunk_range (stack_a);
	start = 0;
	end = start + size; 
	while (stack_a->size > 0)
	{	
		current = current_selection(stack_a,start, end);
		if (current == -1)
		{
			start = end;
			end = end + size;
		}
		else
		{
			get_to_top(stack_a, current);
			push(stack_b, stack_a);	
		}	
	}
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

