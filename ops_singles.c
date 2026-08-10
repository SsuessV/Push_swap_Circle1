/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_singles                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 20:21:06 by bsurilla          #+#    #+#             */
/*   Updated: 2026/08/10 22:12:04 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack *stack)
{
	int	temp;

	if (!stack || stack->size < 2)
		return ;
	temp = stack->numbers[0];
	stack->numbers[0] = stack->numbers[1];
	stack->numbers[1] = temp;
}

void	push(t_stack *stack1, t_stack *stack2)
{
	int	i;

	if (stack2->size == 0)
		return ;
	i = stack1->size;
	if (i > stack2->capacity)
		return ;
	while (i > 0)
	{
		stack1->numbers[i] = stack1->numbers[i - 1];
		i--;
	}
	stack1->numbers[0] = stack2->numbers[0];
	i = 0;
	while (i < stack2->size - 1)
	{
		stack2->numbers[i] = stack2->numbers[i + 1];
		i++;
	}
	stack1->size++;
	stack2->size--;
}

void	rotate(t_stack *stack)
{
	int	temp;
	int	i;
	
	i = 0;
	temp = stack->numbers[0];
	if (!stack || stack->size < 1)
		return ;
	while(i < stack->size - 1)
	{
		stack->numbers[i] = stack->numbers[i + 1];
		i++;
	}
	stack->numbers[i] = temp;
}

void	reverse_rotate(t_stack *stack)
{
	int	temp;
	int i;
	
	i = stack->size - 1;
	temp = stack->numbers[i];
	if (!stack || stack->size < 1)
		return ;
	while(i > 0)
		stack->numbers[i] = stack->numbers[i - 1];
		i--;
	stack->numbers[0] = temp;
}