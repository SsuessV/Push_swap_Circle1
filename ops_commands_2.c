/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_commands_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyoun <suyoun@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 22:35:15 by bsurilla          #+#    #+#             */
/*   Updated: 2026/08/25 18:33:04 by suyoun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack *stack_a, t_info *info)
{
	if (!stack_a)
		return ;
	rotate(stack_a);
	record_op(info, &info->ra, "ra");
}

void	rb(t_stack *stack_b, t_info *info)
{
	if (!stack_b)
		return ;
	rotate(stack_b);
	record_op(info, &info->rb, "rb");
}

void	rra(t_stack *stack_a, t_info *info)
{
	if (!stack_a)
		return ;
	reverse_rotate(stack_a);
	record_op(info, &info->rra, "rra");
}

void	rrb(t_stack *stack_b, t_info *info)
{
	if (!stack_b)
		return ;
	reverse_rotate(stack_b);
	record_op(info, &info->rrb, "rrb");
}
