/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_singles.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 20:21:06 by bsurilla          #+#    #+#             */
/*   Updated: 2026/08/18 15:32:01 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack *stack)
{
	t_numbers	temp;

	if (!stack || stack->size < 2)
		return ;
	temp = stack->numbers[0];
	stack->numbers[0] = stack->numbers[1];
	stack->numbers[1] = temp;
}

void	push(t_stack *stack_dst, t_stack *stack_src)
{
	int	i;

	if (!stack_dst || !stack_src)
		return ;
	if (stack_src->size == 0)
		return ;
	i = stack_dst->size;
	while (i > 0)
	{
		stack_dst->numbers[i] = stack_dst->numbers[i - 1];
		i--;
	}
	stack_dst->numbers[0] = stack_src->numbers[0];
	i = 0;
	while (i < stack_src->size - 1)
	{
		stack_src->numbers[i] = stack_src->numbers[i + 1];
		i++;
	}
	stack_dst->size++;
	stack_src->size--;
}

void	rotate(t_stack *stack)
{
	t_numbers	temp;
	int			i;
	
	if (!stack || stack->size < 2)
	return ;
	i = 0;
	temp = stack->numbers[0];
	while(i < stack->size - 1)
	{
		stack->numbers[i] = stack->numbers[i + 1];
		i++;
	}
	stack->numbers[i] = temp;
}

void	reverse_rotate(t_stack *stack)
{
	t_numbers	temp;
	int 		i;
	
	if (!stack || stack->size < 2)
		return ;
	i = stack->size - 1;
	temp = stack->numbers[i];
	while(i > 0)
	{
		stack->numbers[i] = stack->numbers[i - 1];
		i--;
	}
	stack->numbers[0] = temp;
}
