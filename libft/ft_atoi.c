/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 19:00:55 by bsurilla          #+#    #+#             */
/*   Updated: 2026/05/15 16:09:25 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int			i;
	int			sign;
	long long	number;

	i = 0;
	while (nptr[i] == 32 || (nptr[i] <= 13 && nptr[i] >= 9))
		i++;
	sign = 1;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	number = 0;
	while (nptr[i] <= '9' && nptr[i] >= '0')
	{
		number = number * 10 + (nptr[i] - '0');
		i++;
	}
	return (number * sign);
}

/* #include <stdio.h>
int	main(int argc, char *argv[])
{
	if (argc != 2)
		return (0);	

	printf("%d", ft_atoi(argv[1]));
	return(0);
} */
