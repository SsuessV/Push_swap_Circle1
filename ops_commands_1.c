/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_commands_1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 22:35:15 by bsurilla          #+#    #+#             */
/*   Updated: 2026/08/19 19:17:38 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf/ft_printf.h"

void	info_init(t_info *info)
{
	info->strategy = 0;
	info->bench = 0;
	info->disorder= 0;
	info->total_ops = 0;
	info->sa = 0;
	info->sb = 0;
	info->ss = 0;
	info->pa = 0;
	info->pb = 0;
	info->ra = 0;
	info->rb = 0;
	info->rr = 0;
	info->rra = 0;
	info->rrb = 0;
	info->rrr = 0;
}

void	pa(t_stack *stack_a, t_stack *stack_b)
{
	push(stack_a, stack_b);
	ft_printf("pa\n");
}

void	pb(t_stack *stack_b, t_stack *stack_a)
{
	push(stack_b, stack_a);
	ft_printf("pb\n");
}

void	sa(t_stack *stack_a)
{
	swap(stack_a);
	ft_printf("sa\n");
}

void	sb(t_stack *stack_b)
{
	swap(stack_b);
	ft_printf("sb\n");
}
