/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyoun <suyoun@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 11:28:16 by bsurilla          #+#    #+#             */
/*   Updated: 2026/08/25 18:31:08 by suyoun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	starting_index(int argc, char **argv, t_info *info)
{
	int	i;
	int	strategy;
	int	mode;

	i = 1;
	while (i < argc)
	{
		strategy = valid_strategy(argv[i], info);
		mode = output_mode(argv[i], info);
		if (strategy == 0 && mode == 0)
			break ;
		i++;
	}
	return (i);
}

int	valid_strategy(char *argv, t_info *info)
{
	if (ft_strncmp(argv, "--simple", 9) == 0)
	{
		info->strategy = 1;
		return (1);
	}
	if (ft_strncmp(argv, "--medium", 9) == 0)
	{
		info->strategy = 2;
		return (1);
	}
	if (ft_strncmp(argv, "--complex", 10) == 0)
	{
		info->strategy = 3;
		return (1);
	}
	if (ft_strncmp(argv, "--adaptive", 11) == 0)
	{
		info->strategy = 0;
		return (1);
	}
	return (0);
}

int	output_mode(char *argv, t_info *info)
{
	if (ft_strncmp(argv, "--bench", 8) == 0)
	{
		info->bench = 1;
		return (1);
	}
	return (0);
}
