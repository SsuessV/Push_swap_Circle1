/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_parsing_helpers.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 13:14:39 by bsurilla          #+#    #+#             */
/*   Updated: 2026/08/19 13:20:24 by bsurilla         ###   ########.fr       */
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