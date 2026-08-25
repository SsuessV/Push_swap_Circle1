/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyoun <suyoun@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 20:52:51 by bsurilla          #+#    #+#             */
/*   Updated: 2026/08/25 18:28:18 by suyoun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;
	t_info	info;

	info_init(&info);
	if (!parse_input(argc, argv, &a, &info))
		return (0);
	stack_init(&b, NULL, 0, a.capacity);
	info.disorder = calculate_disorder(&a);
	choose_strategy(&a, &b, &info);
	print_benchmark(&info);
	stack_free(&a);
	stack_free(&b);
}
