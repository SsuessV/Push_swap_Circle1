/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_parsing_helpers.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyoun <suyoun@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 13:14:39 by bsurilla          #+#    #+#             */
/*   Updated: 2026/08/19 21:05:09 by suyoun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**get_substr(int argc, char **argv, int start)
{
	char		**substr;

	substr = NULL;
	if (argc - start == 1)
		substr = ft_split (argv[start], ' ');
	else
		substr = &argv[start];
	return (substr);
}
