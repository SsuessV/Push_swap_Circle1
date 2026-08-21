/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_commands_1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyoun <suyoun@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 22:35:15 by bsurilla          #+#    #+#             */
/*   Updated: 2026/08/21 12:58:23 by suyoun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf/ft_printf.h"

void	info_init(t_info *info) //initializes a struct variable
{
	info->strategy = 0;
	info->algorithm = 3; // why is it set to 3?
	info->bench = 0;
	info->disorder = 0;
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

void	pa(t_stack *stack_a, t_stack *stack_b, t_info *info)
{
	if (!stack_a || !stack_b || stack_b->size == 0)
		return ;
	push(stack_a, stack_b);
	ft_printf("pa\n");
	info->pa++;
	info->total_ops++;
}

void	pb(t_stack *stack_b, t_stack *stack_a, t_info *info)
{
	if (!stack_a || !stack_b || stack_a->size == 0)
		return ;
	push(stack_b, stack_a);
	ft_printf("pb\n");
	info->pb++;
	info->total_ops++;
}

void	sa(t_stack *stack_a, t_info *info)
{
	if (!stack_a || stack_a->size < 2)
		return ;
	swap(stack_a);
	ft_printf("sa\n");
	info->sa++;
	info->total_ops++;
}

void	sb(t_stack *stack_b, t_info *info)
{
	if (!stack_b || stack_b->size < 2)
		return ;
	swap(stack_b);
	ft_printf("sb\n");
	info->sb++;
	info->total_ops++;
}
