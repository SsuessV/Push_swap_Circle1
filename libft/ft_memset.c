/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 16:29:13 by bsurilla          #+#    #+#             */
/*   Updated: 2026/05/06 20:35:15 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = (unsigned char) c;
		i++;
	}
	return (s);
}

/* #include <stdio.h>

int	main (void)
{
	char str[] = "Hello Bea";
	
	printf("str: %s,\n", str);
	printf("after memset: %s\n", (char *)ft_memset(str, '2', 3));
} */