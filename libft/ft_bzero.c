/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 18:22:46 by bsurilla          #+#    #+#             */
/*   Updated: 2026/04/30 19:47:58 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*temp;

	temp = (char *)s;
	i = 0;
	while (i < n)
	{
		temp[i] = '\0';
		i++;
	}
}

/* #include <stdio.h>
#include <string.h>
int	main(void)
{
	char	str[] = "boom-chicka-boom";
	char	str2[] = "boom-chicka-boom";
	int		n;

	n = 1;
	printf("your string: %s\n", str);
	ft_bzero(str,n);
	bzero(str2,n);

	printf("your string: %s\n", str); // do you understand why it's empty?
    printf("your string: %s\n", str2); 

	// printf("your string: %s\n", &str[5]);
    // printf("your string: %s\n", &str2[5]);
} */
