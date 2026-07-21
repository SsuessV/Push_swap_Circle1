/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyoun <suyoun@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 19:00:55 by bsurilla          #+#    #+#             */
/*   Updated: 2026/07/21 21:14:57 by suyoun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long	ft_atoll(const char *nptr)
{
	int			i;
	int			sign;
	long long	number;
	int			digit;

	i = 0;
	sign = 1;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	number = 0;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		digit = nptr[i] - '0';
		if (sign == 1 && number > (LLONG_MAX - digit) / 10)
			return (LLONG_MAX);
		if (sign == -1 && number > (-(LLONG_MIN + digit)) / 10)
			return (LLONG_MIN);
		number = number * 10 + digit;
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
