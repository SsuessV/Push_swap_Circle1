/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 20:52:51 by bsurilla          #+#    #+#             */
/*   Updated: 2026/08/20 01:15:41 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf/ft_printf.h"

void	print_stack(t_stack *stack)
{
		int	i;
		ft_printf("size: %d\ncapacity: %d\n", stack->size, stack->capacity);
		i = 0;
		while (i < stack->size)
		{
			ft_printf("value: %d, rank %d\n", stack->numbers[i].value, stack->numbers[i].rank);
			i++;
		}
		ft_printf("\n");
}

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;
	t_info	info;
	
	if (argc == 1)
    return (0);
	info_init(&info);
	parse_input(argc, argv, &a, &info);
	stack_init(&b, NULL, 0, a.capacity);
	info.disorder = calculate_disorder(&a);
	choose_strategy(&a, &b, &info);
	print_benchmark(&info);
}