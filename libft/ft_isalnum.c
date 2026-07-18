/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 16:29:13 by bsurilla          #+#    #+#             */
/*   Updated: 2026/04/29 17:02:42 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c <= '9' && c >= '0') || (c <= 'Z' && c >= 'A')
		|| (c <= 'z' && c >= 'a'))
		return (1);
	return (0);
}
/* #include <stdio.h>
int	main (void)
{
	int	c = 42;

	printf("Number: %d, 1 = TRUE, 0 = FALSE: %d\n", c, ft_isprint(c));
} */