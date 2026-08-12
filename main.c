/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 20:52:51 by bsurilla          #+#    #+#             */
/*   Updated: 2026/08/12 20:06:15 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf/ft_printf.h"
// #include <stdio.h>

void	print_stack(t_stack *stack)
	{
		int	i;
		ft_printf("size: %d\ncapacity: %d\n", stack->size, stack->capacity);
		i = 0;
		while (i < stack->size)
		{
			ft_printf("%d ", stack->numbers[i]);
			i++;
		}
		ft_printf("\n");
	}

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;

	parse_input(argc, argv, &a);
	stack_init(&b, NULL, 0, a.capacity);
//   ---------- parsing and stack initializing test ------------ //
	
	/* ft_printf("STACK A\n") */;
	/* print_stack(&a); */
	/* ft_printf("\n"); */
	/* ft_printf("STACK B\n") */;
	/* print_stack(&b); */
	/* ft_printf("\n"); */
	ft_printf("\n");
	
//   ------------------- operations test -------------------- //
	
	/* ft_printf("BEFORE sa:\n");
	print_stack(&a);
	ft_printf("\n");
	swap(&a);

	ft_printf("AFTER sa:\n");
	print_stack(&a);
	ft_printf("\n");
	
	ft_printf("BEFORE ra:\n");
	print_stack(&a);
	ft_printf("\n");
	rotate(&a);

	ft_printf("AFTER ra:\n");
	print_stack(&a);
	ft_printf("\n");

	ft_printf("BEFORE rra:\n");
	print_stack(&a);
	ft_printf("\n");
	reverse_rotate(&a);

	ft_printf("AFTER rra:\n");
	print_stack(&a);
	ft_printf("\n"); */
	
/* 	ft_printf("BEFORE pb:\n");
	print_stack(&a);
	print_stack(&b);
	ft_printf("\n");
	push(&b, &a);
	push(&b, &a);
	push(&b, &a);
	push(&b, &a);
	ft_printf("AFTER pb:\n");
	print_stack(&a);
	print_stack(&b);
	ft_printf("\n");
	
	ft_printf("BEFORE pa:\n");
	print_stack(&a);
	print_stack(&b);
	ft_printf("\n");
	push(&a, &b);

	ft_printf("AFTER pa:\n");
	print_stack(&a);
	print_stack(&b);
	ft_printf("\n");
	
	double_swap(&a, &b);
	ft_printf("AFTER ss:\n");
	print_stack(&a);
	print_stack(&b);
	ft_printf("\n");

	double_rotate(&a, &b);
	ft_printf("AFTER rr:\n");
	print_stack(&a);
	print_stack(&b);
	ft_printf("\n");

	double_reverse_rotate(&a, &b);
	ft_printf("AFTER rrr:\n");
	print_stack(&a);
	print_stack(&b);
	ft_printf("\n"); */

//   ------------------- disorder test -------------------- //
	ft_printf("disorder: %f%%", calculate_disorder(&a));
	ft_printf("\n");
//   ------------------- algorithm test -------------------- //

/* 	selection_sort(&a, &b);
	print_stack(&a);
	print_stack(&b); */
}