/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_doubles.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 21:16:22 by bsurilla          #+#    #+#             */
/*   Updated: 2026/08/20 02:14:40 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf/ft_printf.h"

void	ss(t_stack *stack_a, t_stack *stack_b, t_info *info)
{
	if (!stack_a || !stack_b)
		return ;
	swap(stack_a);
	swap(stack_b);
	ft_printf("ss\n");
	info->ss++;
	info->total_ops++;
}

void	rr(t_stack *stack_a, t_stack *stack_b, t_info *info)
{
	if (!stack_a || !stack_b)
		return ;
	rotate(stack_a);
	rotate(stack_b);
	ft_printf("rr\n");
	info->rr++;
	info->total_ops++;
}

void	rrr(t_stack *stack_a, t_stack *stack_b, t_info *info)
{
	if (!stack_a || !stack_b)
		return ;
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	ft_printf("rrr\n");
	info->rrr++;
	info->total_ops++;
}