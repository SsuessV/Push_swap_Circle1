/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 18:44:05 by bsurilla          #+#    #+#             */
/*   Updated: 2026/05/29 20:00:18 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*str;
	int				len;
	unsigned char	chr;

	str = (char *)s;
	chr = (unsigned char) c;
	len = ft_strlen(str);
	if (chr == 0)
		return (&str[len]);
	while (len >= 0)
	{
		if (str[len] == chr)
			return (&str[len]);
		len--;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int main (void)
{
	char str[] = "I'm not moving";
	int c;

	c = '\0';
	printf("this is what you are looking for: %c\n",c);
	printf("your str: %s\n",str);
	printf("ft_strchr: %s\n",ft_strrchr(str,c));
	printf("strchr: %s\n",strrchr(str,c));
}
*/
