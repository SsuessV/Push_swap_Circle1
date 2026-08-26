/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyoun <suyoun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 12:55:54 by bsurilla          #+#    #+#             */
/*   Updated: 2026/08/26 21:00:27 by suyoun           ###   ########.fr       */
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

void	free_split(char **substr)
{
	int	i;

	i = 0;
	if (!substr)
		return ;
	while (substr[i])
	{
		free(substr[i]);
		i++;
	}
	free(substr);
}
