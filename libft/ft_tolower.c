/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 20:10:51 by bsurilla          #+#    #+#             */
/*   Updated: 2026/04/29 17:13:56 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c <= 'Z' && c >= 'A')
		c = c + 32;
	return (c);
}

/* #include <stdio.h>
int	main(void)
{
	int c = 'A';
	printf("str: %c\n", (char)ft_tolower(c));
} */