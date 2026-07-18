/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 19:40:49 by bsurilla          #+#    #+#             */
/*   Updated: 2026/05/18 19:05:05 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	ls;
	size_t	ld;

	ls = ft_strlen(src);
	ld = 0;
	while (ld < size && dst[ld] != 0)
		ld++;
	i = 0;
	if (size == ld)
		return (size + ls);
	while (src[i] != 0 && (ld + i + 1 < size))
	{
		dst[ld + i] = src[i];
		i++;
	}
	if (size > ld)
	{
		dst[ld + i] = '\0';
	}
	return (ld + ls);
}
/*
#include <stdio.h>
#include <bsd/string.h>

int main (void)
{
	char	dst[] = "man";
	char	src[] = "-child";
	size_t	size;

    char    ft_dst[] = "man";
	char    ft_src[] = "-child";
    size_t  ft_size;

	ft_size = 3;
	size = 3;
	printf("full string: %s%s\n", dst,src);

	printf("how many bytes: %zu\n",ft_strlcat(ft_dst,ft_src,ft_size));
	printf("actual function: %zu\n", strlcat(dst,src,size));
}
*/
