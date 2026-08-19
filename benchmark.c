/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   benchmark.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 21:54:12 by bsurilla          #+#    #+#             */
/*   Updated: 2026/08/20 01:21:15 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf/ft_printf.h"

void	print_benchmark(t_info *info)
{
	int	disorder;
	int	whole;
	int decimal;
	
	if (info->bench == 0)
		return ;
	disorder = (int)(info->disorder * 10000);
	whole = disorder / 100;
	decimal = disorder % 100;
	ft_putchar_fd('\n', 2);
	ft_putstr_fd("disorder: ", 2);
	ft_putnbr_fd(whole, 2);
	ft_putchar_fd('.', 2);
	decimal_zero(decimal);
	ft_putstr_fd(" %", 2);
	ft_putchar_fd('\n', 2);
	ft_putstr_fd("strategy: ", 2);
	ft_putstr_fd(strategy_to_text(info), 2);
	ft_putchar_fd('\n', 2);
	ft_putstr_fd("total_ops: ", 2);
	ft_putnbr_fd(info->total_ops, 2);
	ft_putchar_fd('\n', 2);
	print_ops1(info);
	print_ops2(info);
}

char	*strategy_to_text(t_info *info)
{
	if (info->strategy == 1)
		return ("Simple / O(n²)");
	if (info->strategy == 2)
		return ("Medium / O(n√n)");
	if (info->strategy == 3)
		return ("Complex / O(n log n)");
	if (info->algorithm == 1)
		return ("Adaptive / O(n²)");
	if (info->algorithm == 2)
		return ("Adaptive / O(n√n)");
	return ("Adaptive / O(n log n)");
}

void	print_ops1(t_info *info)
{
	ft_putstr_fd("sa: ", 2);
	ft_putnbr_fd(info->sa, 2);
	ft_putchar_fd('	', 2);
	ft_putstr_fd(" sb: ", 2);
	ft_putnbr_fd(info->sb, 2);
	ft_putchar_fd('	', 2);
	ft_putstr_fd(" ss: ", 2);
	ft_putnbr_fd(info->ss, 2);
	ft_putchar_fd('	', 2);
	ft_putstr_fd(" pa: ", 2);
	ft_putnbr_fd(info->pa, 2);
	ft_putchar_fd('	', 2);
	ft_putstr_fd(" pb: ", 2);
	ft_putnbr_fd(info->pb, 2);
	ft_putchar_fd('\n', 2);
}

void	print_ops2(t_info *info)
{
	ft_putstr_fd("ra: ", 2);
	ft_putnbr_fd(info->ra, 2);
	ft_putchar_fd('	', 2);
	ft_putstr_fd(" rb: ", 2);
	ft_putnbr_fd(info->rb, 2);
	ft_putchar_fd('	', 2);
	ft_putstr_fd(" rr: ", 2);
	ft_putnbr_fd(info->rr, 2);
	ft_putchar_fd('	', 2);
	ft_putstr_fd(" rra: ", 2);
	ft_putnbr_fd(info->rra, 2);
	ft_putchar_fd('	', 2);
	ft_putstr_fd(" rrb: ", 2);
	ft_putnbr_fd(info->rrb, 2);
	ft_putchar_fd('	', 2);
	ft_putstr_fd(" rrr: ", 2);
	ft_putnbr_fd(info->rrr, 2);
	ft_putchar_fd('\n', 2);
}

void	decimal_zero(int decimal)
{	
	if (decimal < 10)
		ft_putnbr_fd(0, 2);
	ft_putnbr_fd(decimal, 2);
}