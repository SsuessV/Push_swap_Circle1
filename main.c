/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 20:52:51 by bsurilla          #+#    #+#             */
/*   Updated: 2026/08/05 21:43:50 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// #include "libft/ft_printf.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;

	parse_input(argc, argv, &a);
	stack_init(&b, NULL, 0, a.capacity);
//   ---------- tests to see if the above works ------------ //

	int	i = 0;
	while (i < a.size)
	{
		printf("%d ", a.numbers[i]);
		i++;
	}
	printf("\n");
	printf("a size: %d\n", a.size);
    // b.numbers[0] = 999;
    // b.numbers[1] = 0;
    // b.numbers[2] = 2;
    // b.numbers[3] = 6;
    
    // printf("%d\n",b.numbers[2]);
	printf("b size:%d\n",b.size);
	printf("b capacity:%d\n",b.capacity);
	printf("a capacity:%d\n",a.capacity);
}
