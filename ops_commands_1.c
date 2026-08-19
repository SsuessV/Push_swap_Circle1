/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_commands_1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyoun <suyoun@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 22:35:15 by bsurilla          #+#    #+#             */
/*   Updated: 2026/08/19 22:23:56 by suyoun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf/ft_printf.h"

void	pa(t_stack *stack_a, t_stack *stack_b, t_info *info)
{
	push(stack_a, stack_b);
	ft_printf("pa\n");
	info->pa++;
	info->total_ops++;
}

void	pb(t_stack *stack_b, t_stack *stack_a, t_info *info)
{
	push(stack_b, stack_a);
	ft_printf("pb\n");
	info->pb++;
	info->total_ops++;
}

void	sa(t_stack *stack_a, t_info *info)
{
	swap(stack_a);
	ft_printf("sa\n");
	info->sa++;
	info->total_ops++;
}

void	sb(t_stack *stack_b, t_info *info)
{
	swap(stack_b);
	ft_printf("sb\n");
	info->sb++;
	info->total_ops++;
}

void	ra(t_stack *stack_a, t_info *info)
{
	rotate(stack_a);
	ft_printf("ra\n");
	info->ra++;
	info->total_ops++;
}
