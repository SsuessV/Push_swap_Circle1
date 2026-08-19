/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 20:52:51 by bsurilla          #+#    #+#             */
/*   Updated: 2026/08/19 19:19:40 by bsurilla         ###   ########.fr       */
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

/* int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;

	parse_input(argc, argv, &a);
	stack_init(&b, NULL, 0, a.capacity);
//   ---------- parsing and stack initializing test ------------ //
	
	ft_printf("STACK A\n");
	print_stack(&a);
	ft_printf("\n");
	ft_printf("STACK B\n");
	print_stack(&b);
	ft_printf("\n");
	ft_printf("\n");
	
//   ------------------- disorder test -------------------- //
	ft_printf("disorder: %f %%", calculate_disorder(&a));
	ft_printf("\n");
//   ------------------- algorithm test -------------------- //

	ft_printf("selection: \n");
	selection_sort(&a, &b);
	print_stack(&a);
	print_stack(&b);
	
	ft_printf("chunk: \n");
	chunk_sort(&a, &b);
	ft_printf("Stack A:\n");
	print_stack(&a);
	ft_printf("\n");
	ft_printf("Stack B:\n");
	print_stack(&b);
	ft_printf("\n");
	ft_printf("disorder: %f%%", calculate_disorder(&a));
	ft_printf("\n"); 

	ft_printf("radix: \n");
	radix_sort(&a, &b);
	ft_printf("Stack A:\n");
	print_stack(&a);
	ft_printf("\n");
	ft_printf("Stack B:\n");
	print_stack(&b);
	ft_printf("\n");
	ft_printf("disorder: %f%%", calculate_disorder(&a));
	ft_printf("\n"); 
} */


int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;
	t_info	info;

	parse_input(argc, argv, &a, &info);
	stack_init(&b, NULL, 0, a.capacity);
	info_init(&info);
	ft_printf("disorder: %f %%", calculate_disorder(&a));
	ft_printf("\n");
	choose_strategy(&a, &b, &info);
	
}