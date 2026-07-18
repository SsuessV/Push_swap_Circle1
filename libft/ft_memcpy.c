/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 21:21:15 by bsurilla          #+#    #+#             */
/*   Updated: 2026/05/06 23:07:59 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*psrc;
	unsigned char	*pdest;

	i = 0;
	psrc = (unsigned char *)src;
	pdest = (unsigned char *)dest;
	while (i < n)
	{
		pdest[i] = psrc[i];
		i++;
	}
	return ((unsigned char *)dest);
}
/*
#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char	src[] = "hi hello";
	char	dest[] = "";
	char	src2[] = "hi hello";
	char	dest2[] = "";
	int		n;
	
	n = 5;
	printf("your string: %s\n", src);
	ft_memcpy(dest,src,n);
	memcpy(dest2,src2,n);
	printf("ft_memcpy: %s\n", (char *)dest);
    printf("memcpy: %s\n", (char *)&dest2);
}
*/
