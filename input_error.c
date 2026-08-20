/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyoun <suyoun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 12:55:54 by bsurilla          #+#    #+#             */
/*   Updated: 2026/08/20 16:14:22 by suyoun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_error(void)
{
	write(2, "Error\n", 6);
	exit(42);
}

void	input_cleanup(int *arr, char **substr, int argc, int start)
{
	free(arr);
	if (argc - start == 1)
		free_split(substr);
	print_error();
}
