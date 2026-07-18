/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 22:08:22 by bsurilla          #+#    #+#             */
/*   Updated: 2026/05/15 16:13:31 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*psrc;
	unsigned char	*pdest;

	psrc = (unsigned char *)src;
	pdest = (unsigned char *)dest;
	if ((uintptr_t)pdest < (uintptr_t)psrc)
	{
		i = 0;
		while (i < n)
		{
			pdest[i] = psrc[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (0 < i)
		{
			i--;
			pdest[i] = psrc[i];
		}
	}
	return ((unsigned char *)dest);
}
/*
#include <stdio.h>
#include <bsd/string.h>

int main(void)
{
    char    src[] = "yellow";
    char    dest[] = "Yogabbagabba";
    char    src2[] = "yellow";
    char    dest2[] = "Yogabbagabba";
    int     n;

    n = 10;
    printf("your string: %s\n", src);
    ft_memmove(dest,src,n);
    memmove(dest2,src2,n);
    printf("ft_memmove: %s\n", (char *)dest);
    printf("memmove: %s\n", (char *)dest2);
}
*/
