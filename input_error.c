/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyoun <suyoun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 12:55:54 by bsurilla          #+#    #+#             */
/*   Updated: 2026/08/27 22:57:56 by suyoun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_error(void)
{
	write(2, "Error\n", 6);
	exit(42);
}

void	input_cleanup(int *arr)
{
	free(arr);
	print_error();
}
