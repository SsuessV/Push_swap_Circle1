/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_commands_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 22:35:15 by bsurilla          #+#    #+#             */
/*   Updated: 2026/08/20 11:45:36 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf/ft_printf.h"

void	ra(t_stack *stack_a, t_info *info)
{
	if (!stack_a)
		return ;
	rotate(stack_a);
	ft_printf("ra\n");
	info->ra++;
	info->total_ops++;
}

void	rb(t_stack *stack_b, t_info *info)
{
	if (!stack_b)
		return ;
	rotate(stack_b);
	ft_printf("rb\n");
	info->rb++;
	info->total_ops++;
}

void	rra(t_stack *stack_a, t_info *info)
{
	if (!stack_a)
		return ;
	reverse_rotate(stack_a);
	ft_printf("rra\n");
	info->rra++;
	info->total_ops++;
}

void	rrb(t_stack *stack_b, t_info *info)
{
	if (!stack_b)
		return ;
	reverse_rotate(stack_b);
	ft_printf("rrb\n");
	info->rrb++;
	info->total_ops++;
}
