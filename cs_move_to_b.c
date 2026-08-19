/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cs_move_to_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyoun <suyoun@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 11:31:28 by bsurilla          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2026/08/19 21:24:01 by bsurilla         ###   ########.fr       */
=======
/*   Updated: 2026/08/19 20:45:11 by suyoun           ###   ########.fr       */
>>>>>>> main
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

<<<<<<< HEAD
void	move_chunks_to_b (t_stack *stack_a, t_stack *stack_b, t_info *info)
=======
void	move_chunks_to_b(t_stack *stack_a, t_stack *stack_b)
>>>>>>> main
{
	int	size;
	int	start;
	int	end;
	int	current;

	if (!stack_a || !stack_b)
		return ;
	size = chunk_range (stack_a);
	start = 0;
	end = start + size; 
	while (stack_a->size > 0)
	{
		current = current_selection(stack_a, start, end);
		if (current == -1)
		{
			start = end;
			end = end + size;
		}
		else
		{
<<<<<<< HEAD
			get_to_top(stack_a, current, 'a', info);
			bfly_push(stack_a, stack_b, start, end, info);	
		}	
=======
			get_to_top(stack_a, current, 'a');
			butterfly_push(stack_a, stack_b, start, end);	
		}
>>>>>>> main
	}
}

int	current_selection(t_stack *stack, int start, int end)
{
	int	i;
	int	rank;
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

void	get_to_top(t_stack *stack, int selected_index, char c, t_info *info)
{
	int		rotations;

	if (!stack || selected_index < 0)
		return ;
	if (selected_index <= stack->size / 2)
	{
		rotations = selected_index;
		while (rotations--)
		{
			if (c == 'a')
				ra(stack, info);
			rb(stack, info);
		}
	}
	else
	{
		rotations = stack->size - selected_index;
		while (rotations--)
		{
			if (c == 'a')
				rra(stack, info);
			rrb(stack, info);
		}
	}
}

void	bfly_push(t_stack *a, t_stack *b, int start, int end, t_info *info)
{
	int	middle;
<<<<<<< HEAD
	int atop;
	
	if	(!a || !b || a->size == 0)
=======
	int	atop;

	if (!stack_a || !stack_b || stack_a->size == 0)
>>>>>>> main
		return ;
	middle = (start + end) / 2;
	atop = a->numbers[0].rank;
	if (atop >= middle)
		pb(b, a, info);
	else
	{
<<<<<<< HEAD
		pb(b, a, info);
		rb(b, info);
	}		
=======
		pb(stack_b, stack_a);
		rb(stack_b);
	}
>>>>>>> main
}
